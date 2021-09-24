/*
** EPITECH PROJECT, 2020
** prototype.h
** File description:
** t
*/

#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


/*............... structure ...............*/

typedef struct s_window
{
    sfRenderWindow *window;
    sfEvent event;
    sfTexture* t_cursor;
    sfSprite* s_cursor;
    sfIntRect rect_cursor;
    sfVector2f pos_cursor;
} t_window;


typedef struct s_roucoul
{
    sfTexture* t_roucoul;
    sfSprite* s_roucoul;
    sfIntRect rect;
    sfVector2f pos;
    sfTexture* t_heart;
    sfSprite* s_heart;
    sfIntRect rect_heart;
    sfVector2f pos_heart;
    sfSprite* s_heart_2;
    sfSprite* s_heart_3;
    sfVector2f pos_heart_2;
    sfVector2f pos_heart_3;
    float second;
    sfTime time;
    sfClock *clock;
    float second2;
    sfTime time2;
    sfClock *clock2;
    sfClock *clock3;

} t_roucoul;

typedef struct s_background
{
    sfTexture* t_background;
    sfSprite* s_background;
    sfTexture* t_leviator;
    sfSprite* s_leviator;
    sfTexture* t_malette;
    sfSprite* s_malette;
    sfIntRect rect;
    sfVector2f pos;
    sfIntRect rect_levia;
    sfVector2f pos_levia;
    sfIntRect rect_m;
    sfVector2f pos_m;
    sfTexture* t_over;
    sfSprite* s_over;
    sfIntRect rect_over;
    sfVector2f pos_over;
    sfTexture* t_res;
    sfSprite* s_res;
    sfIntRect rect_res;
    sfVector2f pos_res;
    sfTexture* t_man;
    sfSprite* s_man;
    sfIntRect rect_man;
    sfVector2f pos_man;
    sfTexture* t_dead;
    sfSprite* s_dead;
    sfIntRect rect_dead;
    sfVector2f pos_dead;
} t_background;

typedef struct s_menu
{
    sfTexture* t_menu;
    sfSprite* s_menu;
    sfTexture* t_buton;
    sfSprite* s_buton;
    sfTexture* t_latias;
    sfSprite* s_latias;
    sfVector2f pos_menu;
    sfVector2f pos_buton;
    sfVector2f pos_latias;
    sfIntRect rect_buton;
    sfIntRect rect_menu;
    sfIntRect rect_latias;
    sfVector2i mouse;
    float second;
    sfTime time;
    sfClock *clock;
    float second2;
    sfTime time2;
    sfClock *clock2;
    sfTexture* t_p;
    sfSprite* s_p;
    sfIntRect rect_p;
    sfVector2f pos_p;
    sfTexture* t_t;
    sfSprite* s_t;
    sfIntRect rect_t;
    sfVector2f pos_t;
    sfTexture* t_e;
    sfSprite* s_e;
    sfIntRect rect_e;
    sfVector2f pos_e;
    sfTexture* t_mime;
    sfSprite* s_mime;
    sfIntRect rect_mime;
    sfVector2f pos_mime;
} t_menu;

typedef struct s_music
{
    sfMusic *music_menu;
    sfMusic *music_game;
    sfMusic *music_game_over;
    sfMusic *music_pokeball;
} t_music;

typedef struct v_variable
{
    int stat;
    float z;
    int allea;
    int allea2;
    int death;
    int pause;
    sfTime sleep;
    float volume;
    int pause_menu;
    sfVector2f scale;
    t_window *_window;
    t_roucoul *_roucoul;
    t_background *_background;
    t_menu *_menu;
    t_music *_music;
} v_var;

/*............... fonction.c ...............*/

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);

/*............... malloc.c ...............*/

void my_malloc_struct(v_var *a);
void my_free(v_var *a);
void destroy(v_var *a);

/*............... my_window.c ...............*/

void my_creat(v_var *a);
void open_window(v_var *a);
void my_pool_event(v_var *a);
void display(v_var *a);
void my_second_pool_event(v_var *a);

/*............... my_hunter.c ...............*/

void game(v_var *a);
void start_game(v_var *a);
int main(int ac, char **av);
void game_over(v_var *a);
void menu(v_var *a);

/*............... roucoul.c ...............*/

void my_roucoul(v_var *a);
void display_roucoul(v_var *a);

/*............... pos_roucoul.c ...............*/

void roucoul_rect(v_var *a);
void roucoul_pos(v_var *a);
void detect_pose_r(v_var *a);

/*............... description.c ...............*/

void my_print_description(v_var *a);
void my_second_description(v_var *a);
void my_third_description(v_var *a);
void my_fourth_description(v_var *a);

/*............... background.c ...............*/

void my_background(v_var *a);
void display_background(v_var *a);
void display_cursor(v_var *a);
void my_cursor(v_var *a);

/*............... rect.c ...............*/

void my_rect(v_var *a);
void my_rect_second(v_var *a);
void my_rect_third(v_var *a);
void my_rect_fourth(v_var *a);

/*............... variable.c ...............*/

void my_variable(v_var *a);
void my_variable_2(v_var *a);
void my_variable_3(v_var *a);

/*............... sprites.c ...............*/

void my_sprites(v_var *a);
void my_sprites_second(v_var *a);
void my_sprites_third(v_var *a);
void my_sprites_fourth(v_var *a);
void my_sprites_five(v_var *a);

/*............... redirection.c ...............*/

void my_redirection(v_var *a);
void second_redirection(v_var *a);
void my_redirection_second(v_var *a);
void menu_restart(v_var *a);
void menu_pause(v_var *a);

/*............... music.c ...............*/

int my_music(v_var *a);

/*............... clock.c ...............*/

void my_clock(v_var *a);

/*............... menu.c ...............*/

void display_latias(v_var *a);
void my_menu_start(v_var *a);
void display_menu(v_var *a);
void pos_latias(v_var *a);

/*............... game_over.c ...............*/

void my_game_over(v_var *a);
void display_game_over(v_var *a);
void pos_game_over(v_var *a);

/*............... heart.c ...............*/

void my_heart(v_var *a);
void display_heart(v_var *a);
void display_heart_2(v_var *a);

/*............... man.c ...............*/

void my_man(v_var *a);
void display_dead(v_var *a);
void display_man(v_var *a);

/*............... explication.c ...............*/

void display_explication(v_var *a);
void my_explication(v_var *a);
void my_mime(v_var *a);
void display_mime(v_var *a);
void mime_rect(v_var *a);

#endif /* !PROTOTYPE_H */
