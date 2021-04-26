/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_insert.c
*/

#include "phaseout.h"

char *phase_insert(char *base, char add, char end)
{
    size_t base_length = phase_length(base, end);
    char *array = phase_malloc((base_length + 1), end);
    size_t i = 0;

    for (; i < base_length; i++) {
        array[i] = base[i];
    }
    array[i] = add;

    return (array);
}
