/*
** EPITECH PROJECT, 2020
** clock.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_clock(v_var *a)
{
    a->_roucoul->clock = sfClock_create();
    a->_roucoul->clock2 = sfClock_create();
    a->_roucoul->clock3 = sfClock_create();
}