/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-thomas.techer
** File description:
** matchstick
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_
#include "./my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>

typedef struct matchstick {
    int size;
    int max;
    char **map;
    int line;
    int match;
    int rt_value;
} matchstick_t;

int init_game(char **av, matchstick_t *m);
void display(matchstick_t *m);
int lunch_game(matchstick_t *m);
int get_inputs(matchstick_t *m);
void ia_turn(matchstick_t *m);
int get_matchs_per_line(matchstick_t *m);
int my_random(int a, int b);

#define ERROR_REMOVE_MORE "Error: you cannot remove more than %d matches \
per turn\n"
#define ERROR_INVALID_INPUT "Error: invalid input (positive number expected)\n"
#define ERROR_OUT_OF_RANGE "Error: this line is out of range\n"
#define ERROR_NOT_ENOUGHT "Error: not enough matches on this line\n"
#define WIN "I lost... snif... but I'll get you next time!!\n"
#define LOST "You lost, too bad...\n"

#endif /* !MATCHSTICK_H_ */
