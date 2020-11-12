#include "PHASEOUT.h"

int *phase_malloi(int size, int c)
{
    int *target = NULL;

    if ((target = malloc(sizeof(int) * (size + 1))) == 0) {
        for (int i = 0; i <= size; i++)
            target[i] = c;
        return (target);
    } else
        return (NULL);
}