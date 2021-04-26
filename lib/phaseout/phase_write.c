/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_write.c
*/

#include "phaseout.h"

ssize_t phase_write(char *str, char end)
{
    return (write(1, str, phase_length(str, end)));
}
