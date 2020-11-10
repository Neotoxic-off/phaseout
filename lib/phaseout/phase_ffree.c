#include "PHASEOUT.h"

int phase_ffree(char **array, char *last)
{
    for (int i = 0; array[i] != last; i++)
        free(array[i]);
    free(array);
    return (0);
}