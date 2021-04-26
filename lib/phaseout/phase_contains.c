/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_contains.c
*/

#include "phaseout.h"

size_t phase_contains(char *file, char c, char end)
{
    if (phase_count(file, c, end) >= 1)
        return (True);
    return (False);
}
