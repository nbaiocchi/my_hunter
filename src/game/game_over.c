/*
** EPITECH PROJECT, 2020
** game_over.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_game_over(v_var *a)
{
    sfSprite_setPosition(a->_background->s_over, a->_background->pos_over);
    sfSprite_setPosition(a->_background->s_res, a->_background->pos_res);
    pos_game_over(a);
}

void display_game_over(v_var *a)
{
    sfSprite_setTextureRect(a->_background->s_over, a->_background->rect_over);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_over, NULL);
    sfSprite_setTextureRect(a->_background->s_res, a->_background->rect_res);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_res, NULL);
}

void pos_game_over(v_var *a)
{
    if (a->_background->pos_over.y + 350 < 600) {
        a->_background->pos_over.y += 10;
    }
}