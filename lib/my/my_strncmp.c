/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-thomas.techer
** File description:
** my_strncmp
*/

#include "../../include/my.h"
#include <stdlib.h>

int my_strncmp(const char *str1, const char *str2, int nbr)
{
    int idx = 0;

    if (str1 == NULL || str2 == NULL)
        return (-1);
    while (str1[idx] && str2[idx] && idx < nbr) {
        if (str1[idx] != str2[idx])
            return (str1[idx] - str2[idx]);
        idx += 1;
    }
    if (idx < nbr)
        return (-1);
    return (0);
}
