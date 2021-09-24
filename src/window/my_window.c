/*
** EPITECH PROJECT, 2020
** my_window.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_creat(v_var *a)
{
    my_malloc_struct(a);
    my_variable(a);
    my_sprites(a);
    my_rect(a);
    my_music(a);
    my_clock(a);
}

void open_window(v_var *a)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    a->_window->window = sfRenderWindow_create(video_mode, "My_hunter",
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(a->_window->window, 30);
}

void my_pool_event(v_var *a)
{
    while (sfRenderWindow_pollEvent(a->_window->window, &a->_window->event)) {
        if (a->_window->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyT) && a->stat == 1) {
            menu_restart(a);
        }
        if (a->_window->event.type == sfEvtMouseButtonPressed && a->stat == 0) {
            my_redirection(a);
        }
        if (a->_window->event.type == sfEvtMouseButtonPressed && a->stat == 1) {
                detect_pose_r(a);
        }
        my_second_pool_event(a);
    }
}

void my_second_pool_event(v_var *a)
{
    if (a->_window->event.type == sfEvtMouseButtonPressed && a->stat == 2) {
        my_redirection_second(a);
    }
    if (a->_window->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyP) && a->stat == 1) {
        menu_pause(a);
        a->pause = sfTrue;
    }
}

void display(v_var *a)
{
    sfRenderWindow_clear(a->_window->window, sfBlack);
    if (a->stat == 1) {
        display_background(a);
        display_heart(a);
        display_roucoul(a);
        display_man(a);
        display_cursor(a);
    } else if (a->stat == 0) {
        display_menu(a);
        display_latias(a);
        display_explication(a);
        display_mime(a);
        display_cursor(a);
    } else if (a->stat == 2) {
        display_background(a);
        display_dead(a);
        display_game_over(a);
        display_cursor(a);
    }
    sfRenderWindow_display(a->_window->window);
}