/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-thomas.techer
** File description:
** main
*/

#include "../include/matchstick.h"

void mega_free_de_la_muerte(matchstick_t *m)
{
    for (int i = 0; i < m->size; i++)
        free(m->map[i]);
    free(m->map);
}

int main(int ac, char **av)
{
    matchstick_t m;

    srand(time(NULL));
    if (ac != 3)
        return (my_error("Error: Correct syntax ./matchstick <int> <int>", 84));
    if ((my_str_isnum(av[1]) == 84) || (my_str_isnum(av[2]) == 84))
        return (my_error("Error: Correct syntax ./matchstick <int> <int>", 84));
    if (init_game(av, &m) == 84)
        return (84);
    lunch_game(&m);
    mega_free_de_la_muerte(&m);
    return (m.rt_value);
}