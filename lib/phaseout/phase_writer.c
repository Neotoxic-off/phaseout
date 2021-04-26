/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writer.c
*/

#include "phaseout.h"

ssize_t phase_writer(char *str, char end, char last_character)
{
    if (write(1, str, phase_length(str, end)))
        return (phase_writechar(last_character));

    return (0);
}
