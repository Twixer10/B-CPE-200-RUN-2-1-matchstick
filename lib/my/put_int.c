/*
** EPITECH PROJECT, 2020
** PUT INT
** File description:
** PRINT INT
*/

#include "../../include/my.h"

void put_unsigned_int(unsigned int n)
{
    unsigned int tmp;

    if (n >= 10) {
        tmp = n % 10;
        n = n / 10;
        put_unsigned_int(n);
        my_putchar(tmp + 48);
        }
    else
        my_putchar(n + 48);
}

void put_long_int(long int n)
{
    long int tmp;

    if (n >= 10) {
        tmp = n % 10;
        n = n / 10;
        put_unsigned_int(n);
        my_putchar(tmp + 48);
        }
    else
        my_putchar(n + 48);
}