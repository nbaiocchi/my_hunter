/*
** EPITECH PROJECT, 2020
** fonction.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x = x + 1;
    }
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 0) {
        if (nb > 9)
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return (0);
}

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x++;
    }
    return (x);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int k = 0;
    int j = 0;
    int bool = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            bool = 0;
            k = k * 10;
            k += (str[i] - 48);
        } else if ((str[i] == '-' || str[i] == '+') && bool == 1)
            j = (str[i] == '-')? j + 1 : j;
    }
    if (j % 2 == 1)
        k = -k;
    return (k);
}