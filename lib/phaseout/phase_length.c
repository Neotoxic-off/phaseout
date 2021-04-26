/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_length.c
*/

#include "phaseout.h"

size_t phase_length(char *str, char c)
{
    size_t i = 0;

    for (; str[i] != c; i++);

    return (i);
}
