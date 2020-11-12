#include "PHASEOUT.h"

int phase_nlength(int num)
{
    int i = 0;

    for (; num > 0; i++)
        num = num / 10;

    return (i);
}