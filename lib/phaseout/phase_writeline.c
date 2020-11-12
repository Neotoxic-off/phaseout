#include "PHASEOUT.h"

int phase_writeline(char *str, char end)
{
    for (int i = 0; str[i] != end; i++)
        phase_writechar(str[i]);
    phase_writechar('\n');

    return (0);
}