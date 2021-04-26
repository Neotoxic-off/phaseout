/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_endwith.c
*/

#include "phaseout.h"

size_t phase_endswith(char *original, char *check, char end)
{
    size_t size = phase_length(original, end);
    size_t check_size = phase_length(check, end);
    size_t index = 0;

    for (size_t i = size - check_size; i < size; i++, index++) {
        if (original[i] != check[index])
            return (False);
    }

    return (True);
}
