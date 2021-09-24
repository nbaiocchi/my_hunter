/*
** EPITECH PROJECT, 2020
** sprites.c
** File description:
** sprites
*/

#include "../../include/prototype.h"

void my_sprites(v_var *a)
{
    a->_roucoul->t_roucoul = sfTexture_createFromFile
    ("./image/roucoul_test.png", NULL);
    a->_roucoul->s_roucoul = sfSprite_create();
    sfSprite_setTexture(a->_roucoul->s_roucoul, a->_roucoul->t_roucoul, sfTrue);
    a->_background->t_background = sfTexture_createFromFile
    ("./image/back_poke.png", NULL);
    a->_background->s_background = sfSprite_create();
    sfSprite_setTexture(a->_background->s_background,
    a->_background->t_background, sfTrue);
    a->_background->t_leviator = sfTexture_createFromFile
    ("./image/leviator.png", NULL);
    a->_background->s_leviator = sfSprite_create();
    sfSprite_setTexture(a->_background->s_leviator,
    a->_background->t_leviator, sfTrue);
    a->_background->t_malette = sfTexture_createFromFile
    ("./image/malette.png", NULL);
    a->_background->s_malette = sfSprite_create();
    sfSprite_setTexture(a->_background->s_malette,
    a->_background->t_malette, sfTrue);
    my_sprites_second(a);
}

void my_sprites_second(v_var *a)
{
    a->_menu->t_menu = sfTexture_createFromFile
    ("./image/my_menu_b.png", NULL);
    a->_menu->s_menu = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_menu,
    a->_menu->t_menu, sfTrue);
    a->_menu->t_buton = sfTexture_createFromFile
    ("./image/b_start_2.png", NULL);
    a->_menu->s_buton = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_buton,
    a->_menu->t_buton, sfTrue);
    a->_menu->t_latias = sfTexture_createFromFile
    ("./image/latias.png", NULL);
    a->_menu->s_latias = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_latias,
    a->_menu->t_latias, sfTrue);
    my_sprites_third(a);
}

void my_sprites_third(v_var *a)
{
    a->_background->t_over = sfTexture_createFromFile
    ("./image/game_over2.png", NULL);
    a->_background->s_over = sfSprite_create();
    sfSprite_setTexture(a->_background->s_over,
    a->_background->t_over, sfTrue);
    a->_roucoul->t_heart = sfTexture_createFromFile
    ("./image/heart.png", NULL);
    a->_roucoul->s_heart = sfSprite_create();
    sfSprite_setTexture(a->_roucoul->s_heart, a->_roucoul->t_heart, sfTrue);
    a->_roucoul->s_heart_2 = sfSprite_create();
    sfSprite_setTexture(a->_roucoul->s_heart_2, a->_roucoul->t_heart, sfTrue);
    a->_roucoul->s_heart_3 = sfSprite_create();
    sfSprite_setTexture(a->_roucoul->s_heart_3, a->_roucoul->t_heart, sfTrue);
    a->_background->t_res = sfTexture_createFromFile
    ("./image/restart.png", NULL);
    a->_background->s_res = sfSprite_create();
    sfSprite_setTexture(a->_background->s_res, a->_background->t_res, sfTrue);
    my_sprites_fourth(a);
}

void my_sprites_fourth(v_var *a)
{
    a->_background->t_man = sfTexture_createFromFile
    ("./image/player_v.png", NULL);
    a->_background->s_man = sfSprite_create();
    sfSprite_setTexture(a->_background->s_man, a->_background->t_man, sfTrue);
    a->_background->t_dead = sfTexture_createFromFile
    ("./image/dead.png", NULL);
    a->_background->s_dead = sfSprite_create();
    sfSprite_setTexture(a->_background->s_dead, a->_background->t_dead, sfTrue);
    a->_window->t_cursor = sfTexture_createFromFile
    ("./image/cursor.png", NULL);
    a->_window->s_cursor = sfSprite_create();
    sfSprite_setTexture(a->_window->s_cursor, a->_window->t_cursor, sfTrue);
    a->_menu->t_mime = sfTexture_createFromFile
    ("./image/mime.png", NULL);
    a->_menu->s_mime = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_mime, a->_menu->t_mime, sfTrue);
    my_sprites_five(a);
}

void my_sprites_five(v_var *a)
{
    a->_menu->t_p = sfTexture_createFromFile
    ("./image/pause.png", NULL);
    a->_menu->s_p = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_p,
    a->_menu->t_p, sfTrue);
    a->_menu->t_t = sfTexture_createFromFile
    ("./image/T_buton.png", NULL);
    a->_menu->s_t = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_t,
    a->_menu->t_t, sfTrue);
    a->_menu->t_e = sfTexture_createFromFile
    ("./image/enter.png", NULL);
    a->_menu->s_e = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_e,
    a->_menu->t_e, sfTrue);
}