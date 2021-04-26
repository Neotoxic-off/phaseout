/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_count.c
*/

#include "phaseout.h"

size_t phase_count(char *str, char c, char end)
{
    size_t count = 0;

    for (size_t i = 0; str[i] != end; i++)
        if (str[i] == c)
            count++;

    return (count);
}
