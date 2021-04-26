/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_cnf.c
*/

#include "phaseout.h"

size_t phase_cnf(char *str)
{
    if (str) {
        free(str);
        return (True);
    }

    return (False);
}
