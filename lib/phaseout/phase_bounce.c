/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_bounce.c
*/

#include "phaseout.h"

size_t phase_bounce(char *str, char first, char last, char end)
{
    size_t count = 0;

    for (size_t i = 0; str[i] != end; i++)
        if (str[i] >= first && str[i] <= last)
            count++;

    return (count);
}
