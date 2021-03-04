/*
** EPITECH PROJECT, 2020
** B-PSU-400-LYN-4-1-nmobjdump-paul.gardien
** File description:
** phase_endwith.c
*/

#include "PHASEOUT.h"

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
