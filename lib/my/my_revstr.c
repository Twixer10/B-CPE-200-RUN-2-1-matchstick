/*
** EPITECH PROJECT, 2020
** MY_STRREV
** File description:
** No Description
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    int rev;

    while (i < j)
    {
        rev = str[i];
        str[i] = str[j];
        str[j] = rev;
        i = i + 1;
        j = j - 1;
    }
    return (str);
}
