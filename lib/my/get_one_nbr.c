/*
** EPITECH PROJECT, 2020
** my_getnbrchar.c
** File description:
** lib
*/

#include "../../include/my.h"

int get_one_nbr(char str)
{
    if (str < '0' && str > '9' )
        return (0);
    else
        return (str - 48);
}
