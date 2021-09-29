/*
** EPITECH PROJECT, 2020
** NBR LEN
** File description:
** NO DESCRIPTION FOUND
*/

#include "../../include/my.h"

int my_nbrlen(int nb)
{
    int len = 0;

    while (nb > 0) {
        nb /= 10;
        len++;
    }
    return (len);
}