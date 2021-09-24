/*
** EPITECH PROJECT, 2020
** menu.c
** File description:
** t
*/

#include "../../include/prototype.h"

void display_menu(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_menu,
    a->_menu->rect_menu);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_menu, NULL);
    sfSprite_setTextureRect(a->_menu->s_buton,
    a->_menu->rect_buton);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_buton, NULL);
}

void my_menu_start(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_menu, a->_menu->pos_menu);
    sfSprite_setPosition(a->_menu->s_buton, a->_menu->pos_buton);
    sfSprite_setPosition(a->_menu->s_latias, a->_menu->pos_latias);
    pos_latias(a);
}

void display_latias(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_latias,
    a->_menu->rect_latias);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_latias, NULL);
}

void pos_latias(v_var *a)
{
    if (a->_menu->pos_latias.x + 350 > 0) {
        a->_menu->pos_latias.x -= 10;
    } else {
        a->_menu->pos_latias.x = 1980.0;
    }
}