/*
** EPITECH PROJECT, 2021
** INPUTS MANAGER
** File description:
** NDF
*/

#include "../../include/matchstick.h"

int check_line(matchstick_t *m, char *buff)
{
    buff[my_strlen(buff) -1] = '\0';
    if (m->line < 0) {
        if (my_strlen(buff) > 0 && my_str_isnum_nm(buff) != 84) {
            if (my_getnbr(buff) <= m->size && my_getnbr(buff) != 0) {
                m->line = my_getnbr(buff);
                my_putstr("Matches: ");
                return (0);
            } else {
                my_putstr(ERROR_OUT_OF_RANGE);
                return (84);
            }
        } else {
            my_putstr(ERROR_INVALID_INPUT);
            return (84);
        }
    }
    return (0);
}

int check_match(matchstick_t *m, char *buff)
{
    buff[my_strlen(buff) -1] = '\0';
    if (m->line > 0 && m->match < 0) {
        if (my_strlen(buff) > 0 && my_str_isnum_nm(buff) != 84) {
            if (my_getnbr(buff) <= m->max) {
                m->match = my_getnbr(buff);
                return (0);
            } else {
                my_printf(ERROR_REMOVE_MORE, m->max);
                return (84);
            }
        } else {
            my_putstr(ERROR_INVALID_INPUT);
            return (84);
        }
    }
    return (0);
}

void starteur(matchstick_t *m)
{
    my_putstr("Line: ");
    m->line = -1;
    m->match = -1;
}

int get_inputs(matchstick_t *m)
{
    char *buff = NULL;
    size_t i;
    int tmp = -1;
    int gl = 0;

    starteur(m);
    while ((gl = getline(&buff, &i, stdin)) != -1) {
        if (m->line != -1 && (tmp = check_match(m, buff)) == 84)
            break;
        if ((tmp = check_line(m, buff)) == 84)
            break;
        if (m->line != -1 && m->match != -1)
            break;
    }
    (tmp == 84 ? get_inputs(m):0);
    if (gl == -1)
        return (974);
    return (0);
}