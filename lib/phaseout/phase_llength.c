/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_llength.c
*/

#include "PHASEOUT.h"

int phase_llength(char **array, char *str)
{
    int i = 0;

    for (; array[i] != str; i++);

    return (i);
}