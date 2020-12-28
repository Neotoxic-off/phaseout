/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writeline.c
*/

#include "PHASEOUT.h"

int phase_writeline(char *str, char end)
{
    if (write(1, str, phase_length(str, end)))
        return (phase_writechar('\n'));

    return (0);
}