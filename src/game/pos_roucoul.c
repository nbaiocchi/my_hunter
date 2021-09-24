/*
** EPITECH PROJECT, 2020
** pos_roucoul.c
** File description:
** t
*/

#include "../../include/prototype.h"

void roucoul_rect(v_var *a)
{
    a->_roucoul->second2 = a->_roucoul->time2.microseconds / 1000000.0;
    a->_roucoul->time2 = sfClock_getElapsedTime(a->_roucoul->clock2);
    if (a->_roucoul->second2 > 0.10) {
        if (a->_roucoul->rect.left != 240) {
            a->_roucoul->rect.left += 120;
        } else
            a->_roucoul->rect.left = 0;
        sfClock_restart(a->_roucoul->clock2);
    }
}

void roucoul_pos(v_var *a)
{
    a->_roucoul->second = a->_roucoul->time.microseconds / 1000000.0;
    a->_roucoul->time = sfClock_getElapsedTime(a->_roucoul->clock);
    if (a->_roucoul->second > 0.01) {
        if (a->z > 45.0)
            a->z = 45.0;
        if (a->_roucoul->pos.x > 0) {
            a->_roucoul->pos.x -= a->z;
            a->_roucoul->pos.y += a->allea2 = (rand() %
            (10 - (-10) + 1)) + (-10);
        } else {
            a->_roucoul->pos.x = 1980.0;
            a->_roucoul->pos.y = a->allea = (rand() % (900 - 50 + 1)) + 50;
            a->death += 1;
            second_redirection(a);
        }
        sfClock_restart(a->_roucoul->clock);
    }
}