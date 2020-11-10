#include "PHASEOUT.h"

int phase_bouce(char *str, char first, char last, char end)
{
    int count = 0;

    for (int i = 0; str[i] != end; i++)
        if (str[i] >= first && str[i] <= last)
            count++;
    return (count);
}