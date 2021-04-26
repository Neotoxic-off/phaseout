/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_nlength.c
*/

#include "phaseout.h"

size_t phase_nlength(size_t num)
{
    size_t i = 0;

    for (; num > 0; i++)
        num = num / 10;

    return (i);
}
