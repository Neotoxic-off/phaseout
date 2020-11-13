/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_malloc.c
*/

#include "PHASEOUT.h"

char *phase_malloc(int size, char content)
{
    char *array = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i <= size; i++)
        array[i] = content;

    return (array);
}