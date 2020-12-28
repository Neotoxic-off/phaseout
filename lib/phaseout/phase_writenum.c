/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writenum.c
*/

#include "PHASEOUT.h"

int phase_writenum(int nb)
{
    int mod = 0;

    if (nb < 0) {
        phase_writechar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - mod) / 10;
            phase_writenum(nb);
            phase_writechar(48 + mod);
        } else
            phase_writechar(48 + nb % 10);
    }

    return (True);
}
