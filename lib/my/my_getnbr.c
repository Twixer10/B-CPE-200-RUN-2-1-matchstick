/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** lib
*/

#include "../../include/my.h"

int my_getnbr(char *str)
{
    int i = 0;
    int nbr = 0;

    if (str[0] == '-' || str[0] == '\0')
        i = i + 1;

    while (str[i] != '\0') {
        if (str[i] < '0' && str[i] > '9')
            return (84);
        nbr = nbr * 10 + get_one_nbr(str[i]);
        i = i + 1;
    }
    if (str[0] == '-')
        return (nbr * -1);
    else
        return (nbr);
}
