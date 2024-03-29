/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** game.h
*/

#pragma once

#include "../includes/game_object.h"

void game_behaviour(engine_variables_t *en_var);

sfSprite *get_background_sprite(void);

void handle_score(engine_variables_t *en_var);

void check_enemy_out(
    game_object_t *linked_list_head, engine_variables_t *en_var);

void check_life(engine_variables_t *en_var);

void game_over(engine_variables_t *en_var);
