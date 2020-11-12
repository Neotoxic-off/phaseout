#include "PHASEOUT.h"

char **phase_mmalloc(int size, char *end)
{
    char **array = malloc(sizeof(char *) * (size + 1));

    for (int i = 0; i <= size; i++)
        array[i] = end;

    return (array);
}