/*
** EPITECH PROJECT, 2020
** malloc.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_malloc_struct(v_var *a)
{
    a->_roucoul = malloc(sizeof(t_roucoul));
    a->_window = malloc(sizeof(t_window));
    a->_background = malloc(sizeof(t_background));
    a->_menu = malloc(sizeof(t_menu));
    a->_music = malloc(sizeof(t_music));
}

void my_free(v_var *a)
{
    free(a->_background);
    free(a->_roucoul);
    free(a->_window);
    free(a->_menu);
    free(a->_music);
    free(a);
}

void destroy(v_var *a)
{
    sfRenderWindow_destroy(a->_window->window);
    sfSprite_destroy(a->_menu->s_buton);
    sfSprite_destroy(a->_menu->s_menu);
    sfSprite_destroy(a->_menu->s_latias);
    sfSprite_destroy(a->_roucoul->s_roucoul);
    sfSprite_destroy(a->_background->s_leviator);
    sfSprite_destroy(a->_background->s_background);
    sfSprite_destroy(a->_background->s_malette);
    sfSprite_destroy(a->_roucoul->s_heart);
    sfSprite_destroy(a->_background->s_over);
    sfSprite_destroy(a->_background->s_res);
    sfMusic_destroy(a->_music->music_menu);
    sfMusic_destroy(a->_music->music_game);
    sfMusic_destroy(a->_music->music_game_over);
}