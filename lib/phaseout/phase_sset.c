/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_sset.c
*/

#include "phaseout.h"

char **phase_sset(char *add, char *last, char end)
{
    char *tmp = phase_purge(add, ' ', end);
    char **array = phase_split(tmp, ',', end, last);

    phase_cnf(tmp);

    return (array);
}
