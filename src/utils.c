/*
** EPITECH PROJECT, 2021
** UTILS FUNCTION
** File description:
** utils
*/

#include "../include/matchstick.h"

int my_random(int a, int b)
{
    return (rand() % (b - a) + a);
}