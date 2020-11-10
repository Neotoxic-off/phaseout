#include "PHASEOUT.h"

char *phase_itoa(int number, char c)
{
    int len = phase_nlength(number);
    char *str = phase_malloc(sizeof(char) * (len), c);

    while (len--) {
        str[len] = number % 10  + '0';
        number = number / 10;
    }
    return (str);
}