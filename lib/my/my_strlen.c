/*
** EPITECH PROJECT, 2020
** My Put Str
** File description:
** Print a String
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i]) {
        i += 1;
    }
    return (i);
}
