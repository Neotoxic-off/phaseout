/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_atoi.c
*/

#include "phaseout.h"

int phase_atoi(char *str, char c)
{
    int size = (int)phase_length(str, c) - 1;
    int number = 0;
    int i = 1;

    for (; size >= 0; size--, i = i * 10)
        number = number + ((str[size] - 48) * i);

    return (number);
}
