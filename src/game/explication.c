/*
** EPITECH PROJECT, 2020
** explication.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_explication(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_p, a->_menu->pos_p);
    sfSprite_setPosition(a->_menu->s_t, a->_menu->pos_t);
    sfSprite_setPosition(a->_menu->s_e, a->_menu->pos_e);
}

void display_explication(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_p, a->_menu->rect_p);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_p, NULL);
    sfSprite_setTextureRect(a->_menu->s_t, a->_menu->rect_t);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_t, NULL);
    sfSprite_setTextureRect(a->_menu->s_e, a->_menu->rect_e);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_e, NULL);
}

void my_mime(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_mime, a->_menu->pos_mime);
    mime_rect(a);
}

void display_mime(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_mime, a->_menu->rect_mime);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_mime, NULL);
}

void mime_rect(v_var *a)
{
    a->_roucoul->second2 = a->_roucoul->time2.microseconds / 1000000.0;
    a->_roucoul->time2 = sfClock_getElapsedTime(a->_roucoul->clock3);
    if (a->_roucoul->second2 > 0.25) {
    if (a->_menu->rect_mime.left != 750) {
        a->_menu->rect_mime.left += 150;
    } else
        a->_menu->rect_mime.left = 0;
    sfClock_restart(a->_roucoul->clock3);
    }
}