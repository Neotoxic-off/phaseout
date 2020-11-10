#include "PHASEOUT.h"

int phase_llength(char **array, char *str)
{
    int i = 0;

    for (; array[i] != str; i++);
    return (i);
}