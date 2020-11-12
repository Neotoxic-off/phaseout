#include "PHASEOUT.h"


int phase_ffree(char **array, char *last)
{
    int number_of_free = phase_llength(array, last);

    for (int i = 0; i < number_of_free; i++)
        free(array[i]);
    free(array);

    return (0);
}
