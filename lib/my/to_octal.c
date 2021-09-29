/*
** EPITECH PROJECT, 2020
** TO OCTAL
** File description:
** Convert int to octal
*/

#include "../../include/my.h"

void to_octal(int n)
{
    int res;

    if (n >= 8) {
        res = n % 8;
        n = n / 8;
        to_octal(n);
    } else if (n > 0) {
        res = n % 8;
    }
    my_put_nbr(res);
}