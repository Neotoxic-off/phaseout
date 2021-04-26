/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_malloc.c
*/

#include "phaseout.h"

char *phase_malloc(size_t size, char content)
{
    char *array = malloc(sizeof(char) * (size + 1));

    for (size_t i = 0; i <= size; i++)
        array[i] = content;

    return (array);
}
