/*
** EPITECH PROJECT, 2020
** variable.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_variable(v_var *a)
{
    a->_roucoul->pos.x = 1920;
    a->_roucoul->pos.y = 500;
    a->_background->pos.x = 0;
    a->_background->pos.y = 0;
    a->_background->pos_levia.x = 590;
    a->_background->pos_levia.y = 705;
    a->_background->pos_m.x = 1450;
    a->_background->pos_m.y = 900;
    a->_menu->pos_menu.x = 0;
    a->_menu->pos_menu.y = 0;
    a->_menu->pos_buton.x = 860;
    a->_menu->pos_buton.y = 900;
    a->_menu->pos_latias.x = 1800;
    a->_menu->pos_latias.y = 400;
    a->_menu->mouse.x = 0;
    a->_menu->mouse.y = 0;
    a->z = 15.0;
    a->stat = 0;
    my_variable_2(a);
}

void my_variable_2(v_var *a)
{
    a->allea = 0;
    a->allea2 = 0;
    a->death = 0;
    a->_background->pos_over.x = 720;
    a->_background->pos_over.y = -350;
    a->_roucoul->pos_heart.x = 100;
    a->_roucoul->pos_heart.y = 940;
    a->_roucoul->pos_heart_2.x = 200;
    a->_roucoul->pos_heart_2.y = 940;
    a->_roucoul->pos_heart_3.x = 300;
    a->_roucoul->pos_heart_3.y = 940;
    a->_background->pos_res.x = 860;
    a->_background->pos_res.y = 900;
    a->_background->pos_man.x = 1500;
    a->_background->pos_man.y = 783;
    a->_background->pos_dead.x = 1500;
    a->_background->pos_dead.y = 880;
    a->scale.x = -1;
    a->scale.y = 1;
    my_variable_3(a);
}

void my_variable_3(v_var *a)
{
    a->_window->pos_cursor.x = 0;
    a->_window->pos_cursor.y = 0;
    a->pause = sfTrue;
    a->volume = 25;
    a->sleep.microseconds = 1;
    a->pause_menu = 0;
    a->_menu->pos_p.x = 100;
    a->_menu->pos_p.y = 1000;
    a->_menu->pos_e.x = 100;
    a->_menu->pos_e.y = 950;
    a->_menu->pos_t.x = 100;
    a->_menu->pos_t.y = 900;
    a->_menu->pos_mime.x = 550;
    a->_menu->pos_mime.y = 850;
}