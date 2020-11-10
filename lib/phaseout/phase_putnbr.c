#include "PHASEOUT.h"

int phase_writenbr(int nb)
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
            phase_writenbr(nb);
            phase_writechar(48 + mod);
        } else
            phase_writechar(48 + nb % 10);
    }
    return (0);
}
