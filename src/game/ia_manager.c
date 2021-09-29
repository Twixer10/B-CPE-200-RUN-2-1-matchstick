/*
** EPITECH PROJECT, 2021
** IA MANAGER
** File description:
** NO DESC FOUND
*/

#include "../../include/matchstick.h"

int get_all_stick(matchstick_t *m)
{
    int len = 0;

    for (int i = 0; i < m->size; i++)
        for (int j = 0; m->map[i][j]; j++)
            if (m->map[i][j] == '|')
                len++;
    return (len);
}

int ia_get_matchs_per_line(matchstick_t *m, int k)
{
    int len = 0;

    if (k == 0) {
        return (len);
    }
    for (int i = 0; m->map[k - 1][i]; i++)
        if (m->map[k - 1][i] == '|')
            len++;
    return (len);
}

void ia_remove(matchstick_t *m, int l, int ma)
{
    my_printf("AI removed %d match(es) from line %d\n", ma, l);
    for (int i = my_strlen(m->map[l - 1]) - 1; i >= 0 && ma != 0; i--) {
        if (m->map[l - 1][i] == '|') {
            m->map[l - 1][i] = ' ';
            ma--;
        }
    }
    display(m);
}

void process_ia(matchstick_t *m)
{
    int len = 0;
    int nbr = 0;
    int i = my_random(1, m->size - 1);

    while ((len = ia_get_matchs_per_line(m, i)) != -1) {
        if (len == 0) {
            i = my_random(0, m->size);
            continue;
        }
        if (len == 1 || (get_all_stick(m) == 2 && len == 2))
            nbr = 1;
        else if (len > m->max && m->max - 1 != 1)
            nbr = my_random(1, m->max - 1);
        else
            nbr = len - 1;
        if (len == m->max + 1)
            nbr = m->max;
        ia_remove(m, i, nbr);
        break;
    }
}

void ia_turn(matchstick_t *m)
{
    if (get_all_stick(m) == 0) {
        my_putstr(LOST);
        m->rt_value = 2;
        return;
    }
    my_putstr("AI's turn...\n");
    process_ia(m);
    if (get_all_stick(m) == 0) {
        my_putstr(WIN);
        m->rt_value = 1;
        return;
    }
}