#include "PHASEOUT.h"

char *phase_reverse(char *str, char end)
{
    char temp = 0;
    int size = phase_length(str, end);

    for (int i = 0; i < size / 2; i++) {
        temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;
    }

    return (str);
}
