/*
** EPITECH PROJECT, 2020
** my_charlowcase.c
** File description:
** lib
*/

#include "../../include/my.h"

char my_charlowcase(char str)
{
    if (str >= 65 && str <= 90)
        return (str + 32);
    else
        return (str);
}
