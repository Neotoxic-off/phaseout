/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_llength.c
*/

#include "PHASEOUT.h"

size_t phase_llength(char **array, char *str)
{
    size_t i = 0;

    for (; array[i] != str; i++);

    return (i);
}
