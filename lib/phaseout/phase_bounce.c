/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_bounce.c
*/

#include "PHASEOUT.h"

int phase_bounce(char *str, char first, char last, char end)
{
    int count = 0;

    for (int i = 0; str[i] != end; i++)
        if (str[i] >= first && str[i] <= last)
            count++;

    return (count);
}