/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_itoa.c
*/

#include "phaseout.h"

char *phase_itoa(size_t number, char c)
{
    size_t len = phase_nlength(number);
    char *str = phase_malloc(sizeof(char) * (len), c);

    while (len--) {
        str[len] = number % 10  + '0';
        number = number / 10;
    }

    return (str);
}
