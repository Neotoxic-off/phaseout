/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writer.c
*/

#include "PHASEOUT.h"

int phase_writer(char *str, char end, char last_character)
{
    for (int i = 0; str[i] != end; i++)
        phase_writechar(str[i]);
    phase_writechar(last_character);

    return (0);
}