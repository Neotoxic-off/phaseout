/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writeline.c
*/

#include "phaseout.h"

ssize_t phase_writeline(char *str, char end)
{
    if (write(1, str, phase_length(str, end)))
        return (phase_writechar('\n'));

    return (Error);
}
