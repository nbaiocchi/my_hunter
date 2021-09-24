/*
** EPITECH PROJECT, 2020
** rect.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_rect(v_var *a)
{
    a->_roucoul->rect.top = 0;
    a->_roucoul->rect.left = 0;
    a->_roucoul->rect.width = 120;
    a->_roucoul->rect.height = 120;
    a->_background->rect.top = 0;
    a->_background->rect.left = 0;
    a->_background->rect.width = 1920;
    a->_background->rect.height = 1080;
    a->_background->rect_levia.top = 0;
    a->_background->rect_levia.left = 0;
    a->_background->rect_levia.width = 120;
    a->_background->rect_levia.height = 100;
    a->_background->rect_m.top = 0;
    a->_background->rect_m.left = 0;
    a->_background->rect_m.width = 320;
    a->_background->rect_m.height = 200;
    my_rect_second(a);
}

void my_rect_second(v_var *a)
{
    a->_menu->rect_menu.top = 0;
    a->_menu->rect_menu.left = 0;
    a->_menu->rect_menu.width = 1920;
    a->_menu->rect_menu.height = 1080;
    a->_menu->rect_buton.top = 0;
    a->_menu->rect_buton.left = 0;
    a->_menu->rect_buton.width = 200;
    a->_menu->rect_buton.height = 111;
    a->_menu->rect_latias.top = 0;
    a->_menu->rect_latias.left = 0;
    a->_menu->rect_latias.width = 358;
    a->_menu->rect_latias.height = 183;
    a->_background->rect_over.top = 0;
    a->_background->rect_over.left = 0;
    a->_background->rect_over.width = 450;
    a->_background->rect_over.height = 350;
    my_rect_third(a);
}

void my_rect_third(v_var *a)
{
    a->_roucoul->rect_heart.top = 0;
    a->_roucoul->rect_heart.left = 0;
    a->_roucoul->rect_heart.width = 100;
    a->_roucoul->rect_heart.height = 97;
    a->_background->rect_res.top = 0;
    a->_background->rect_res.left = 0;
    a->_background->rect_res.width = 150;
    a->_background->rect_res.height = 150;
    a->_background->rect_man.top = 0;
    a->_background->rect_man.left = 0;
    a->_background->rect_man.width = 500;
    a->_background->rect_man.height = 500;
    a->_background->rect_dead.top = 0;
    a->_background->rect_dead.left = 0;
    a->_background->rect_dead.width = 480;
    a->_background->rect_dead.height = 300;
    my_rect_fourth(a);
}

void my_rect_fourth(v_var *a)
{
    a->_window->rect_cursor.top = 0;
    a->_window->rect_cursor.left = 0;
    a->_window->rect_cursor.width = 30;
    a->_window->rect_cursor.height = 32;
    a->_menu->rect_p.top = 0;
    a->_menu->rect_p.left = 0;
    a->_menu->rect_p.width = 400;
    a->_menu->rect_p.height = 50;
    a->_menu->rect_t.top = 0;
    a->_menu->rect_t.left = 0;
    a->_menu->rect_t.width = 400;
    a->_menu->rect_t.height = 50;
    a->_menu->rect_e.top = 0;
    a->_menu->rect_e.left = 0;
    a->_menu->rect_e.width = 400;
    a->_menu->rect_e.height = 50;
    a->_menu->rect_mime.top = 0;
    a->_menu->rect_mime.left = 0;
    a->_menu->rect_mime.width = 150;
    a->_menu->rect_mime.height = 135;
}