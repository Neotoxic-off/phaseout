/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_set.c
*/

#include "phaseout.h"

char *phase_set(char *add, char end)
{
    size_t add_length = phase_length(add, end);
    char *array = phase_malloc(add_length, end);

    for (size_t i = 0; i < add_length; i++) {
        array[i] = add[i];
    }

    return (array);
}
