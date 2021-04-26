/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_ffree.c
*/

#include "phaseout.h"


size_t phase_ffree(char **array, char *last)
{
    size_t number_of_free = phase_llength(array, last);

    for (size_t i = 0; i < number_of_free; i++)
        free(array[i]);
    free(array);

    return (0);
}
