#include "PHASEOUT.h"

int phase_writechar(char c)
{
    return (write(1, &c, 1));
}