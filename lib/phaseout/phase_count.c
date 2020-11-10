#include "PHASEOUT.h"

int phase_count(char *str, char c, char end)
{
    int count = 0;

    for (int i = 0; str[i] != end; i++)
        if (str[i] == c)
            count++;
    return (count);
}