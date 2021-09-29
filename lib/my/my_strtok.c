/*
** EPITECH PROJECT, 2021
** MY STR TOK
** File description:
** NO DESCRIPTION FOR YUU
*/

#include "../../include/my.h"
#include <stdlib.h>

static int get_wlen(char *str, char delim)
{
    int i = 0;
    int len = 0;

    while (str[i] == delim)
        i++;
    while (str[i] != delim && str[i]) {
        i++;
        len++;
    }
    return (len);
}

char *my_strconfigure(unsigned int size)
{
    char *ptr;
    unsigned int i = 0;

    if (!size)
        return (NULL);
    ptr = malloc(sizeof(char) * (size + 1));
    if (ptr == NULL)
        return (NULL);
    while (i < size + 1)
        *(ptr + i++) = 0;
    return (ptr);
}

static char **transform(char *str, int wcount, char delim)
{
    int i = 0, j = 0, k = 0, wlen = 0;
    char **new = malloc(sizeof(*new) * (wcount + 1));

    if (new == NULL)
        return (NULL);

    while (i < wcount) {
        k = 0, wlen = get_wlen(&str[j], delim);
        new[i] = my_strconfigure(wlen + 1);
        if (new[i] == NULL)
            new[i] = NULL;
        while (str[j] == delim)
            j++;
        while (str[j] != delim && str[j])
            new[i][k++] = str[j++];
        new[i++][k] = 0;
    }
    new[i] = 0;
    return (new);
}

int my_countwords(char *str, char delim)
{
    int count = 0;
    int i = 0;

    while (str[i]) {
        while (str[i] == delim)
            i++;
        if (str[i] != delim && str[i])
            count++;
        while (str[i] != delim && str[i])
            i++;
    }
    return (count);
}

char **my_strtok(char *str, char delim)
{
    int wcount = my_countwords(str, delim);
    char **ret = NULL;

    if (str == NULL)
        return (NULL);
    ret = transform(str, wcount, delim);
    if (ret == NULL)
        return (NULL);
    return (ret);
}