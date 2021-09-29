/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** lib
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
