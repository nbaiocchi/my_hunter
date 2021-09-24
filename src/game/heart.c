/*
** EPITECH PROJECT, 2020
** heart.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_heart(v_var *a)
{
    if (a->death == 0) {
        sfSprite_setPosition(a->_roucoul->s_heart, a->_roucoul->pos_heart);
        sfSprite_setPosition(a->_roucoul->s_heart_2, a->_roucoul->pos_heart_2);
        sfSprite_setPosition(a->_roucoul->s_heart_3, a->_roucoul->pos_heart_3);
    }
    if (a->death == 1) {
        sfSprite_setPosition(a->_roucoul->s_heart, a->_roucoul->pos_heart);
        sfSprite_setPosition(a->_roucoul->s_heart_2, a->_roucoul->pos_heart_2);
    }
    if (a->death == 2) {
        sfSprite_setPosition(a->_roucoul->s_heart, a->_roucoul->pos_heart);
    }
}

void display_heart(v_var *a)
{
    if (a->death == 0) {
        sfSprite_setTextureRect(a->_roucoul->s_heart, a->_roucoul->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_roucoul->s_heart, NULL);
        sfSprite_setTextureRect(a->_roucoul->s_heart_2,
        a->_roucoul->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_roucoul->s_heart_2, NULL);
        sfSprite_setTextureRect(a->_roucoul->s_heart_3,
        a->_roucoul->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_roucoul->s_heart_3, NULL);
    }
    display_heart_2(a);
}

void display_heart_2(v_var *a)
{
    if (a->death == 1) {
        sfSprite_setTextureRect(a->_roucoul->s_heart, a->_roucoul->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_roucoul->s_heart, NULL);
        sfSprite_setTextureRect(a->_roucoul->s_heart_2,
        a->_roucoul->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_roucoul->s_heart_2, NULL);
    }
    if (a->death == 2) {
        sfSprite_setTextureRect(a->_roucoul->s_heart, a->_roucoul->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_roucoul->s_heart, NULL);
    }
}