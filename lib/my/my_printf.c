/*
** EPITECH PROJECT, 2020
** MY_PRINTF
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdarg.h>
#include "../../include/my.h"

void step_one(va_list l, int i, char const *s)
{
    (s[i+1] == 'c'?my_putchar(va_arg(l, int)):0);
    (s[i+1] == 'i' || s[i+1] == 'd'?my_put_nbr(va_arg(l, int)):0);
    (s[i+1] == 's' || s[i+1] == 'S'?my_putstr(va_arg(l, char *)):0);
    (s[i+1] == 'p'?address(va_arg(l, long long)):0);
    (s[i+1] == 'u'?put_unsigned_int(va_arg(l, unsigned int)):0);
    (s[i+1] == 'x'?to_hexadecimal_min(va_arg(l, int)):0);
    (s[i+1] == 'X'?to_hexadecimal_maj(va_arg(l, int)):0);
    (s[i+1] == 'o'?to_octal(va_arg(l, int)):0);
    (s[i+1] == '%'?my_putchar('%'):0);
}

void my_printf(char const *s, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, s);
    while (s[i] != '\0') {
        if (s[i] == '%') {
            step_one(ap, i, s);
            i = i + 2;
        }
        my_putchar(s[i]);
        i++;
    }
    va_end(ap);
}