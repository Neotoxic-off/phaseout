/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writechar.c
*/

#include "PHASEOUT.h"

int phase_writechar(char c)
{
    return (write(1, &c, 1));
}