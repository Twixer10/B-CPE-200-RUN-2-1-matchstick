/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-thomas.techer
** File description:
** display
*/

#include "../../include/matchstick.h"

void display(matchstick_t *m)
{
    for (int i = 0; i < (2 * m->size) + 1; i++)
        my_putchar('*');
    my_putchar('\n');
    for (int j = 0; j < m->size; j++) {
        my_printf("*%s*\n", m->map[j]);
    }
    for (int k = 0; k < (2 * m->size) + 1; k++)
        my_putchar('*');
    my_putstr("\n\n");
}