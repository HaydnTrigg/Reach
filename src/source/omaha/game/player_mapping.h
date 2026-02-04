#pragma once
#ifndef __PLAYER_MAPPING_H__
#define __PLAYER_MAPPING_H__

/* ---------- headers */

/* ---------- constants */

enum e_output_user_index
{
    k_output_user_none = -1,
    _output_user_0, // $unsure
    _output_user_1, // $unsure
    _output_user_2, // $unsure
    _output_user_3, // $unsure
    k_number_of_users
};

/* ---------- definitions */

/* ---------- prototypes */

long player_mapping_get_unit_by_output_user(e_output_user_index user_index);

/* ---------- globals */

/* ---------- public code */

#endif // __PLAYER_MAPPING_H__
