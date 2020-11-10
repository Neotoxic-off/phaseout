#include "PHASEOUT.h"

int phase_length(char *str, char c)
{
    int i = 0;

    for (; str[i] != c; i++);

    return (i);
}