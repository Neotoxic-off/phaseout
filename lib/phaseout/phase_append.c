#include "PHASEOUT.h"

char *phase_append(char *base, char *add, char end)
{
    int base_length = phase_length(base, end);
    int add_length = phase_length(add, end);
    char *array = phase_malloc((base_length + add_length), end);
    int index = 0;

    for (int i = 0; i < base_length; i++, index++) {
        array[index] = base[i];
    }
    for (int i = 0; i < add_length; i++, index++) {
        array[index] = add[i];
    }

    return (array);
}