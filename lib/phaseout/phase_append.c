/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_append.c
*/

#include "phaseout.h"

char *phase_append(char *base, char *add, char end)
{
    size_t base_length = phase_length(base, end);
    size_t add_length = phase_length(add, end);
    char *array = phase_malloc((base_length + add_length), end);
    size_t index = 0;

    for (size_t i = 0; i < base_length; i++, index++) {
        array[index] = base[i];
    }
    for (size_t i = 0; i < add_length; i++, index++) {
        array[index] = add[i];
    }

    return (array);
}
