/*
** EPITECH PROJECT, 2020
** man.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_man(v_var *a)
{
    sfSprite_setPosition(a->_background->s_man, a->_background->pos_man);
    sfSprite_setPosition(a->_background->s_dead, a->_background->pos_dead);
    sfSprite_setScale(a->_background->s_dead, a->scale);
    sfSprite_setScale(a->_background->s_man, a->scale);
}

void display_man(v_var *a)
{
    sfSprite_setTextureRect(a->_background->s_man, a->_background->rect_man);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_man, NULL);
}

void display_dead(v_var *a)
{
    sfSprite_setTextureRect(a->_background->s_dead, a->_background->rect_dead);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_background->s_dead, NULL);
}