/*
** EPITECH PROJECT, 2020
** roucoul.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_roucoul(v_var *a)
{
    sfSprite_setPosition(a->_roucoul->s_roucoul, a->_roucoul->pos);
    roucoul_rect(a);
    roucoul_pos(a);
}

void display_roucoul(v_var *a)
{
    sfSprite_setTextureRect(a->_roucoul->s_roucoul, a->_roucoul->rect);
    sfRenderWindow_drawSprite(a->_window->window, a->_roucoul->s_roucoul,
    NULL);
}

void detect_pose_r(v_var *a)
{
    if (a->_menu->mouse.x >= a->_roucoul->pos.x
    && a->_menu->mouse.x <= a->_roucoul->pos.x + 120 &&
    a->_menu->mouse.y >= a->_roucoul->pos.y
    && a->_menu->mouse.y <= a->_roucoul->pos.y + 120) {
        a->_roucoul->pos.y = a->allea = (rand() % (900 - 50 + 1)) + 50;
        a->z += 5.0;
        a->_roucoul->pos.x = 1980.0;
    }
}