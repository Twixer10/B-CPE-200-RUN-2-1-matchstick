/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** lib
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strcat(char *str , char const *to_add)
{
    char *new = malloc(sizeof(char) *(my_strlen(str) +
    my_strlen(to_add)) + 1);
    int i = my_strlen(str);
    int k = 0;

    my_strcpy(new, str);
    while (i != (my_strlen(str) + my_strlen(to_add))) {
        new[i] = to_add[k];
        i++;
        k++;
    }
    new[i] = '\0';
    return (new);
}
