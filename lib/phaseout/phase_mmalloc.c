/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_mmalloc.c
*/

#include "phaseout.h"

char **phase_mmalloc(size_t size, char *end)
{
    size_t total_size = sizeof(char *) * (size + 1);
    char **array = malloc(total_size);

    for (size_t i = 0; i <= size; i++)
        array[i] = end;

    return (array);
}
