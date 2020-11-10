#include "PHASEOUT.h"

int phase_putstr(char *str, char end)
{
    for (int i = 0; str[i] != end; i++)
        phase_putchar(str[i]);
    return (0);
}