/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_reverse.c
*/

#include "phaseout.h"

char *phase_reverse(char *str, char end)
{
    char temp = 0;
    size_t size = phase_length(str, end);

    for (size_t i = 0; i < size / 2; i++) {
        temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;
    }

    return (str);
}
