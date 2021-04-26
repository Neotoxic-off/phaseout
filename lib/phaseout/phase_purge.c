/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_purge.c
*/

#include "phaseout.h"

char *phase_purge(char *array, char remove, char end)
{
    size_t len = phase_length(array, end);
    size_t spaces = phase_count(array, remove, end);
    char *new_array = phase_malloc(len - spaces, end);
    char *tmp = NULL;

    for (size_t i = 0; i < len; i++) {
        if (array[i] != remove) {
            tmp = phase_set(new_array, end);
            phase_cnf(new_array);
            new_array = phase_insert(tmp, array[i], end);
            phase_cnf(tmp);
        }
    }

    return (new_array);
}
