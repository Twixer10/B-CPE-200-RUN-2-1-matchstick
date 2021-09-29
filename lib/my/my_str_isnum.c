/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** lib
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            my_printf("Error: '%s' is not a number.\n", str);
            return (84);
        }
        i = i + 1;
    }
    return (1);
}

int my_str_isnum_nm(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return (84);
        }
        i = i + 1;
    }
    return (1);
}