/*
** EPITECH PROJECT, 2020
** TO HEXA DECIMAL
** File description:
** Convert int to hexa decimal
*/

#include "../../include/my.h"

void to_hexadecimal_min(int n)
{
    int res;

    if (n >= 16) {
        res = n % 16;
        n = n / 16;
        to_hexadecimal_min(n);
    } else if (n > 0) {
        res = n % 16;
    }
    if (res > 9) {
        my_putchar(res + 87);
    } else {
        my_putchar(res + 48);
    }
}

void to_hexadecimal_maj(int n)
{
    int res;

    if (n >= 16) {
        res = n % 16;
        n = n / 16;
        to_hexadecimal_maj(n);
    } else if (n > 0) {
        res = n % 16;
    }
    if (res > 9)
        my_putchar(res + 55);
    else
        my_putchar(res + 48);
}

void to_hexadecimal_add(long long n)
{
    int res;

    if (n >= 16) {
        res = n % 16;
        n = n / 16;
        to_hexadecimal_add(n);
    } else if (n > 0) {
        res = n % 16;
        n = n / 16;
    }
    if (res > 9)
        my_putchar(res + 87);
    else
        my_putchar(res + 48);
}

void address(long long n)
{
    my_putstr("0x");
    to_hexadecimal_add(n);
}