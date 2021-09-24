/*
** EPITECH PROJECT, 2020
** music.c
** File description:
** t
*/

#include "../../include/prototype.h"

int my_music(v_var *a)
{
    a->_music->music_menu = sfMusic_createFromFile("./song/music_menu.ogg");
    if (!a->_music->music_menu)
        return EXIT_FAILURE;
    a->_music->music_game = sfMusic_createFromFile("./song/music_game.ogg");
    if (!a->_music->music_game)
        return EXIT_FAILURE;
    a->_music->music_game_over = sfMusic_createFromFile
    ("./song/music_game_over.ogg");
    if (!a->_music->music_game_over)
        return EXIT_FAILURE;
    return (0);
}