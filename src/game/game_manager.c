/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-thomas.techer
** File description:
** game_manager
*/

#include "../../include/matchstick.h"

int init_map(matchstick_t *m)
{
    char **map;
    int y;
    int x;

    if ((map = malloc(sizeof(char *) * m->size)) ==  NULL)
        return (my_error("Error: Malloc failed `init_game:35`", 84));
    for (y = 0; y < m->size; y++) {
        if ((map[y] = malloc(sizeof(char) * (2 * m->size) + 1)) == NULL)
            return (my_error("Error: Malloc failed `init_game:38`", 84));
        for (x = 0; x < 2 * m->size; x++) {
            if ((x < m->size - 1 - y) || x >= ((2 * m->size) - m->size + y)) {
                map[y][x] = ' ';
            } else {
                map[y][x] = '|';
            }
        }
        map[y][x - 1] = '\0';
    }
    m->map = map;
    return (0);
}

int init_game(char **av, matchstick_t *m)
{
    if (my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100)
        return (84);
    if (my_getnbr(av[2]) < 1 )
        return (84);
    m->size = my_getnbr(av[1]);
    m->max = my_getnbr(av[2]);
    init_map(m);
    return (0);
}

int get_matchs_per_line(matchstick_t *m)
{
    int len = 0;

    for (int i = 0; m->map[m->line - 1][i]; i++)
        if (m->map[m->line - 1][i] == '|')
            len++;
    return (len);
}

int remove_match(matchstick_t *m)
{
    if (m->match <= get_matchs_per_line(m)) {
        my_printf("Player removed %d match(es) from line %d\n",
        m->match, m->line);
        for (int i = my_strlen(m->map[m->line - 1]) - 1;
        i >= 0 && m->match != 0; i--) {
            if (m->map[m->line - 1][i] == '|') {
                m->map[m->line-1][i] = ' ';
                m->match--;
            }
        }
        m->line = -1;
        m->match = -1;
        return (1);
    } else {
        my_putstr(ERROR_NOT_ENOUGHT);
        get_inputs(m);
        return (0);
    }
}

int lunch_game(matchstick_t *m)
{
    display(m);
    m->rt_value = 0;
    while (m->rt_value == 0) {
        my_putstr("Your turn:\n");
        if (get_inputs(m) == 974) {
            m->rt_value = 0;
            return (84);
        }
        remove_match(m);
        display(m);
        ia_turn(m);
    }
    return (0);
}
