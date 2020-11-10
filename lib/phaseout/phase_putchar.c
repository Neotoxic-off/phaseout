#include "PHASEOUT.h"

int phase_putchar(char c)
{
    return (write(1, &c, 1));
}