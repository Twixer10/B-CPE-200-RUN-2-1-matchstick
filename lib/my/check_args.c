/*
** EPITECH PROJECT, 2020
** CHECK ARGS
** File description:
** NO DESCRIPTION FOUND
*/

#include "../../include/my.h"

int check_args(char **av, int i, char *arg)
{
    if (my_strlen(av[i]) != my_strlen(arg))
        return (0);
    for (int k = 0; k < my_strlen(av[i]); k++)
        if (av[i][k] != arg[k])
            return (0);
    return (1);
}