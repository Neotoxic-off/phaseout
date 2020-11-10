#include "PHASEOUT.h"

char *phase_malloc(int size, char c)
{
    char *array = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i <= size; i++)
        array[i] = c;

    return (array);
}