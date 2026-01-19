/* ---------- headers */

#include "omaha\rasterizer\rasterizer_lut_control.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned int const s_online_file_tag_set::k_max_tag_count; // "?k_max_tag_count@s_online_file_tag_set@@2IB"
// public: static unsigned int const s_online_file_listing::k_max_entry_count; // "?k_max_entry_count@s_online_file_listing@@2IB"
// public: static long const s_blf_fileshare_items_chunk::k_chunk_type; // "?k_chunk_type@s_blf_fileshare_items_chunk@@2JB"
// public: static long const s_blf_fileshare_items_chunk::k_chunk_major_version; // "?k_chunk_major_version@s_blf_fileshare_items_chunk@@2JB"
// public: static long const s_blf_fileshare_items_chunk::k_chunk_minor_version; // "?k_chunk_minor_version@s_blf_fileshare_items_chunk@@2JB"
// public: static unsigned int const s_blf_fileshare_items_chunk::k_max_message_length; // "?k_max_message_length@s_blf_fileshare_items_chunk@@2IB"
// public: static long const s_blf_fileshare_info_chunk::k_chunk_type; // "?k_chunk_type@s_blf_fileshare_info_chunk@@2JB"
// public: static long const s_blf_fileshare_info_chunk::k_chunk_major_version; // "?k_chunk_major_version@s_blf_fileshare_info_chunk@@2JB"
// public: static long const s_blf_fileshare_info_chunk::k_chunk_minor_version; // "?k_chunk_minor_version@s_blf_fileshare_info_chunk@@2JB"
// public: static unsigned int const s_online_file_predefined_search_query::k_name_length; // "?k_name_length@s_online_file_predefined_search_query@@2IB"
// public: static unsigned int const s_online_file_predefined_search_query::k_description_length; // "?k_description_length@s_online_file_predefined_search_query@@2IB"
// public: static long const s_blf_predefined_queries_chunk::k_chunk_type; // "?k_chunk_type@s_blf_predefined_queries_chunk@@2JB"
// public: static long const s_blf_predefined_queries_chunk::k_chunk_major_version; // "?k_chunk_major_version@s_blf_predefined_queries_chunk@@2JB"
// public: static long const s_blf_predefined_queries_chunk::k_chunk_minor_version; // "?k_chunk_minor_version@s_blf_predefined_queries_chunk@@2JB"
// public: static int const c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_age@s_online_file_search_query@@D$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_search_query::e_age const c_enum_no_init<enum s_online_file_search_query::e_age, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_age@s_online_file_search_query@@D$0A@$03Us_default_enum_string_resolver@@@@2W4e_age@s_online_file_search_query@@B"
// public: static int const c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_sort_criteria@s_online_file_search_query@@D$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_search_query::e_sort_criteria const c_enum_no_init<enum s_online_file_search_query::e_sort_criteria, char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_sort_criteria@s_online_file_search_query@@D$0A@$04Us_default_enum_string_resolver@@@@2W4e_sort_criteria@s_online_file_search_query@@B"
// public: static long const s_blf_megalo_categories_chunk::k_chunk_type; // "?k_chunk_type@s_blf_megalo_categories_chunk@@2JB"
// public: static long const s_blf_megalo_categories_chunk::k_chunk_major_version; // "?k_chunk_major_version@s_blf_megalo_categories_chunk@@2JB"
// public: static long const s_blf_megalo_categories_chunk::k_chunk_minor_version; // "?k_chunk_minor_version@s_blf_megalo_categories_chunk@@2JB"
// public: static long const s_static_array<struct s_network_lsp_leaderboard_player_game_results, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_lsp_leaderboard_player_game_results@@$03@@2JB"
// public: static long const s_static_array<struct s_network_lsp_leaderboard_player_stats, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_lsp_leaderboard_player_stats@@$0CA@@@2JB"
// public: static long const s_static_array<struct s_network_lsp_leaderboard_player_season_result, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$0CA@@@2JB"
// public: static enum e_lsp_leaderboard_profile_arena_hopper_flags const c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_profile_arena_hopper_flags@@B"
// public: static enum e_lsp_leaderboard_profile_arena_flags const c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_profile_arena_flags@@B"
// public: static long const s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_lsp_leaderboard_profile_arena_hopper_data@@$07@@2JB"
// public: static long const s_static_array<unsigned long, 16>::k_element_count; // "?k_element_count@?$s_static_array@K$0BA@@@2JB"
// public: static enum e_network_session_parameter_base_flags const c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_network_session_parameter_base_flags@@B"
// public: static int const c_enum_no_init<enum e_ai_trait_vision, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_ai_trait_vision@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_ai_trait_vision const c_enum_no_init<enum e_ai_trait_vision, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_ai_trait_vision@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_ai_trait_vision@@B"
// public: static int const c_enum_no_init<enum e_ai_trait_sound, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_ai_trait_sound@@E$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_ai_trait_sound const c_enum_no_init<enum e_ai_trait_sound, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_ai_trait_sound@@E$0A@$03Us_default_enum_string_resolver@@@@2W4e_ai_trait_sound@@B"
// public: static int const c_enum_no_init<enum e_ai_trait_luck, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_ai_trait_luck@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_ai_trait_luck const c_enum_no_init<enum e_ai_trait_luck, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_ai_trait_luck@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_ai_trait_luck@@B"
// public: static int const c_enum_no_init<enum e_ai_trait_weapon, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_ai_trait_weapon@@E$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_ai_trait_weapon const c_enum_no_init<enum e_ai_trait_weapon, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_ai_trait_weapon@@E$0A@$03Us_default_enum_string_resolver@@@@2W4e_ai_trait_weapon@@B"
// public: static int const c_enum_no_init<enum e_ai_trait_grenade, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_ai_trait_grenade@@E$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_ai_trait_grenade const c_enum_no_init<enum e_ai_trait_grenade, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_ai_trait_grenade@@E$0A@$03Us_default_enum_string_resolver@@@@2W4e_ai_trait_grenade@@B"
// public: static enum e_game_engine_miscellaneous_option_flags const c_flags_no_init<enum e_game_engine_miscellaneous_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_game_engine_miscellaneous_option_flags@@E$03Us_default_enum_string_resolver@@@@2W4e_game_engine_miscellaneous_option_flags@@B"
// public: static enum e_map_override_option_flags const c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@2W4e_map_override_option_flags@@B"
// public: static enum e_game_engine_team_options_team_flags const c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@2W4e_game_engine_team_options_team_flags@@B"
// public: static int const c_enum_no_init<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@2HB"
// public: static enum e_multiplayer_team_designator const c_enum_no_init<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@2W4e_multiplayer_team_designator@@B"
// public: static int const c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_game_engine_team_options_model_override_type const c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_game_engine_team_options_model_override_type@@B"
// public: static int const c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_game_engine_team_options_designator_switch_type const c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@2W4e_game_engine_team_options_designator_switch_type@@B"
// public: static long const s_static_array<struct s_game_engine_team_options_team_definition, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_game_engine_team_options_team_definition@@$07@@2JB"
// public: static enum e_survival_wave_flags const c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_survival_wave_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_survival_wave_flags@@B"
// public: static int const c_enum_no_init<enum e_wave_squad_advance_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_wave_squad_advance_type@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_wave_squad_advance_type const c_enum_no_init<enum e_wave_squad_advance_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_wave_squad_advance_type@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_wave_squad_advance_type@@B"
// public: static enum e_survival_variant_flags const c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_survival_variant_flags@@E$04Us_default_enum_string_resolver@@@@2W4e_survival_variant_flags@@B"
// public: static int const c_enum_no_init<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_campaign_difficulty_level const c_enum_no_init<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@2W4e_campaign_difficulty_level@@B"
// public: static unsigned char const c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@2EB"
// public: static int const c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_hopper_team_allegiance const c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@2W4e_hopper_team_allegiance@@B"
// public: static enum e_network_session_matchmaking_hopper_flags const c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@2W4e_network_session_matchmaking_hopper_flags@@B"
// public: static long const s_static_array<struct s_network_session_matchmaking_hopper_team_data, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_matchmaking_hopper_team_data@@$07@@2JB"
// public: static long const s_static_array<float, 4>::k_element_count; // "?k_element_count@?$s_static_array@M$03@@2JB"
// public: static long const s_static_array<struct s_network_session_parameter_matchmaking_rematch_team_data, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_parameter_matchmaking_rematch_team_data@@$0BA@@@2JB"
// public: static unsigned long const c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@2KB"
// public: static unsigned long const c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@2KB"
// public: static long const s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_parameter_matchmaking_peer_voting_results@@$0BA@@@2JB"
// public: static int const c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_matchmaking_load_failure_type const c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@2W4e_matchmaking_load_failure_type@@B"
// public: static long const s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_parameter_matchmaking_voting_option@@$02@@2JB"
// public: static long const s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_parameter_matchmaking_voting_round@@$0M@@@2JB"
// public: static long const s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_parameter_matchmaking_load_failure@@$03@@2JB"
// public: static int const c_static_wchar_string<16>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$0BA@@@2HB"
// public: static enum e_matchmaking_voting_description_flags const c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_matchmaking_voting_description_flags@@B"
// public: static long const s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_parameter_matchmaking_voting_description@@$02@@2JB"
// public: static enum e_matchmaking_game_configuration_flags const c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_matchmaking_game_configuration_flags@@B"
// public: static long const s_static_array<struct s_persistent_per_commendation_state, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_persistent_per_commendation_state@@$0IA@@@2JB"
// public: static long const s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@$0BAA@@@2JB"
// public: static enum e_purchase_property const c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@2W4e_purchase_property@@B"
// public: static enum e_player_reward_flag const c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@2W4e_player_reward_flag@@B"
// public: static enum e_remappable_button const c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@2W4e_remappable_button@@B"
// public: static int const c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_player_profile_interface::e_player_profile_interface_flags const c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@2W4e_player_profile_interface_flags@c_player_profile_interface@@B"
// public: static long const c_player_profile_insertion_point_flags<64, 12>::k_max_map_count; // "?k_max_map_count@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@2JB"
// public: static long const c_player_profile_insertion_point_flags<64, 12>::k_max_insertion_point_count; // "?k_max_insertion_point_count@?$c_player_profile_insertion_point_flags@$0EA@$0M@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 768>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0DAA@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 768>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0DAA@@@2JB"
// public: static enum e_new_user_experience const c_flags_no_init<enum e_new_user_experience, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_new_user_experience@@E$03Us_default_enum_string_resolver@@@@2W4e_new_user_experience@@B"
// public: static enum e_waypoint_integration_flags const c_flags_no_init<enum e_waypoint_integration_flags, unsigned long, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_waypoint_integration_flags@@K$00Us_default_enum_string_resolver@@@@2W4e_waypoint_integration_flags@@B"
// float *gamma_adjustment; // "?gamma_adjustment@@3PAMA"
// float *black_level_adjustment; // "?black_level_adjustment@@3PAMA"

// public: bool c_rasterizer_LUT_control::same_curve_as(class c_rasterizer_LUT_control const &) const;
// public: void c_rasterizer_LUT_control::compute_LUT(struct _D3DGAMMARAMP &);
// float get_linear_buffer_value_from_true_sRGB(long, long, float);
// float get_linear_buffer_value_from_piecewise_linear_sRGB(long, long, float);
// float get_linear_buffer_value_from_7e3(long, long, float);
// public: void c_rasterizer_LUT_control::compute_LUT(struct _D3DPWLGAMMA &);
// float ldexp(float, int);
// ldexpf;
// public: c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>(enum e_remappable_button);

//public: bool c_rasterizer_LUT_control::same_curve_as(class c_rasterizer_LUT_control const &) const
//{
//    mangled_ppc("?same_curve_as@c_rasterizer_LUT_control@@QBA_NABV1@@Z");
//};

//public: void c_rasterizer_LUT_control::compute_LUT(struct _D3DGAMMARAMP &)
//{
//    mangled_ppc("?compute_LUT@c_rasterizer_LUT_control@@QAAXAAU_D3DGAMMARAMP@@@Z");
//};

//float get_linear_buffer_value_from_true_sRGB(long, long, float)
//{
//    mangled_ppc("?get_linear_buffer_value_from_true_sRGB@@YAMJJM@Z");
//};

//float get_linear_buffer_value_from_piecewise_linear_sRGB(long, long, float)
//{
//    mangled_ppc("?get_linear_buffer_value_from_piecewise_linear_sRGB@@YAMJJM@Z");
//};

//float get_linear_buffer_value_from_7e3(long, long, float)
//{
//    mangled_ppc("?get_linear_buffer_value_from_7e3@@YAMJJM@Z");
//};

//public: void c_rasterizer_LUT_control::compute_LUT(struct _D3DPWLGAMMA &)
//{
//    mangled_ppc("?compute_LUT@c_rasterizer_LUT_control@@QAAXAAU_D3DPWLGAMMA@@@Z");
//};

//float ldexp(float, int)
//{
//    mangled_ppc("?ldexp@@YAMMH@Z");
//};

//ldexpf
//{
//    mangled_ppc("ldexpf");
//};

//public: c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>(enum e_remappable_button)
//{
//    mangled_ppc("??0?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@QAA@W4e_remappable_button@@@Z");
//};

