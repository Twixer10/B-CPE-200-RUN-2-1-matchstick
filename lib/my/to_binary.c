/*
** EPITECH PROJECT, 2020
** TO BINARY
** File description:
** Convert int to binary
*/

#include "../../include/my.h"

void to_binary(int n)
{
    int res;

    if (n >= 2) {
        res = n % 2;
        n = n / 2;
        to_binary(n);
    } else if (n > 0) {
        res = n % 2;
    }
    my_put_nbr(res);
}