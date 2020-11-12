#include "PHASEOUT.h"

char *phase_tostring(char c, char end)
{
    char *array = phase_malloc(1, end);
    array[0] = c;

    return (array);
}