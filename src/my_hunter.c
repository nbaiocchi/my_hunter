/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** video game
*/

#include "../include/prototype.h"

void game(v_var *a)
{
    my_background(a);
    my_roucoul(a);
    my_heart(a);
    my_man(a);
    my_cursor(a);
    display(a);
}

void menu(v_var *a)
{
    my_menu_start(a);
    my_cursor(a);
    my_explication(a);
    my_mime(a);
    display(a);
}

void game_over(v_var *a)
{
    my_background(a);
    my_game_over(a);
    my_man(a);
    my_cursor(a);
    display(a);
}

void start_game(v_var *a)
{
    open_window(a);
    while (sfRenderWindow_isOpen(a->_window->window)) {
        a->_menu->mouse = sfMouse_getPosition((sfWindow *)a->_window->window);
        sfWindow_setMouseCursorVisible((sfWindow *)a->_window->window, sfFalse);
        my_pool_event(a);
        if (a->stat == 0) {
            menu(a);
        }
        if (a->stat == 1) {
            game(a);
        }
        if (a->stat == 2) {
            game_over(a);
        }
    }
    destroy(a);
}

int main(int ac, char **av)
{
    srand(time(NULL));
    v_var *a = malloc(sizeof(v_var));

    my_creat(a);
    sfMusic_play(a->_music->music_menu);
    sfMusic_setVolume(a->_music->music_menu, a->volume);
    if (ac == 2 && av[1][1] == 'h') {
        my_print_description(a);
        return (0);
    }
    start_game(a);
    my_free(a);
    return (0);
}
