/*
** EPITECH PROJECT, 2020
** background.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_background(v_var *a)
{
    sfSprite_setPosition(a->_background->s_background, a->_background->pos);
    sfSprite_setPosition(a->_background->s_leviator, a->_background->pos_levia);
    sfSprite_setPosition(a->_background->s_malette, a->_background->pos_m);
}

void my_cursor(v_var *a)
{
    a->_window->pos_cursor.x = a->_menu->mouse.x;
    a->_window->pos_cursor.y = a->_menu->mouse.y;
    sfSprite_setPosition(a->_window->s_cursor, a->_window->pos_cursor);
}

void display_background(v_var *a)
{
    sfSprite_setTextureRect(a->_background->s_background, a->_background->rect);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_background, NULL);
    sfSprite_setTextureRect(a->_background->s_leviator,
    a->_background->rect_levia);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_leviator, NULL);
    sfSprite_setTextureRect(a->_background->s_malette,
    a->_background->rect_m);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_malette, NULL);
}

void display_cursor(v_var *a)
{
    sfSprite_setTextureRect(a->_window->s_cursor, a->_window->rect_cursor);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_window->s_cursor, NULL);
}