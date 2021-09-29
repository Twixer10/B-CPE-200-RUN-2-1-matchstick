/*
** EPITECH PROJECT, 2020
** My Put Str
** File description:
** Print a String
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putstr(char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
        my_putchar(c[i]);
}
