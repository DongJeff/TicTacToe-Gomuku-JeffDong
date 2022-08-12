/*
Author: Ryan Miller
Email: miller.ryan@wustl.edu
Summary: This header file defines several useful enums that are used to avoid hardcoding some common constants.
It also contains the usage function which is later defined in Lab4.cpp
*/

#pragma once
using namespace std;

enum important_indices {
    program_name,
    game_name,
    correct_num_args,
    board_spaces = 25
};

enum failure_type {
    success,
    invalid_game_type_error,
    too_many_command_line_arguments_error,
    too_few_command_line_arguments_error,
    quit_game,
    draw_game,
    bad_alloc_exception,
    unexpected_error
};

failure_type usage(char* program);