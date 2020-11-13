/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_prime.c
*/

#include "PHASEOUT.h"

int phase_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 2; i < nb; i++)
        if (nb % i == 0)
            return (0);
    return (1);
}
