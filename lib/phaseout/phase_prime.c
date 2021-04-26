/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_prime.c
*/

#include "phaseout.h"

size_t phase_prime(size_t nb)
{
    if (nb <= 1)
        return (0);
    for (size_t i = 2; i < nb; i++)
        if (nb % i == 0)
            return (0);
    return (1);
}
