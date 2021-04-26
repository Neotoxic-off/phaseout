/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_ctoa.c
*/

#include "phaseout.h"

char *phase_ctoa(char c, char end)
{
    char *array = phase_malloc(1, end);
    array[0] = c;

    return (array);
}
