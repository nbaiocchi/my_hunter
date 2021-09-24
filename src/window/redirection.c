/*
** EPITECH PROJECT, 2020
** rediretion.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_redirection(v_var *a)
{
    if (a->_menu->mouse.x > 860 && a->_menu->mouse.x < 1060
    && a->_menu->mouse.y > 900 && a->_menu->mouse.y < 1015) {
        sfMusic_stop(a->_music->music_menu);
        sfMusic_play(a->_music->music_game);
        sfMusic_setVolume(a->_music->music_game, a->volume);
        sfMusic_setLoop(a->_music->music_game, sfTrue);
        a->stat += 1;
    }
}

void my_redirection_second(v_var *a)
{
    if (a->_menu->mouse.x >= a->_background->pos_res.x
    && a->_menu->mouse.x <= a->_background->pos_res.x + 150 &&
    a->_menu->mouse.y >= a->_background->pos_res.y
    && a->_menu->mouse.y <= a->_background->pos_res.y + 150) {
        sfMusic_stop(a->_music->music_game_over);
        sfMusic_play(a->_music->music_menu);
        sfMusic_setVolume(a->_music->music_menu, a->volume);
        sfMusic_setLoop(a->_music->music_menu, sfTrue);
        a->z = 15.0;
        a->death = 0;
        a->stat = 0;
    }
}

void second_redirection(v_var *a)
{
    if (a->death == 3) {
        a->stat = 2;
        sfMusic_stop(a->_music->music_game);
        sfMusic_play(a->_music->music_game_over);
        sfMusic_setVolume(a->_music->music_game_over, a->volume);
        sfMusic_setLoop(a->_music->music_game_over, sfTrue);
    }
}

void menu_restart(v_var *a)
{
    sfMusic_stop(a->_music->music_game);
    sfMusic_play(a->_music->music_menu);
    sfMusic_setVolume(a->_music->music_menu, a->volume);
    sfMusic_setLoop(a->_music->music_menu, sfTrue);
    a->z = 15.0;
    a->death = 0;
    a->stat = 0;
    a->_roucoul->pos.x = 1920;
    a->_roucoul->pos.y = a->allea = (rand() % (900 - 50 + 1)) + 50;
}

void menu_pause(v_var *a)
{
    while (a->pause == sfTrue) {
        sfSleep(a->sleep);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEnter)) {
            a->pause = sfFalse;
        }
    }
}