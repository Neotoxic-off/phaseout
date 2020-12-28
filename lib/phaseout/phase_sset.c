/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_sset.c
*/

#include "PHASEOUT.h"

char **phase_sset(char *add, char *last, char end)
{
    int len = phase_length(add, end);
    char *tmp = phase_purge(add, ' ', end);
    char **array = phase_split(tmp, ',', end, last);

    phase_cnf(tmp);

    return (array);
}