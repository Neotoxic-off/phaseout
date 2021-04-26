#include "phaseout.h"
#include "status.h"

char *equals_0()
{
    if (phase_equals("test\0", "test\0", EMPTY) == True) {
        return ("SUCCESS : equals_0\0");
    }

    return ("FAIL    : equals_0\0");
}

char *equals_1()
{
    if (phase_equals("test\0", "tess\0", EMPTY) == False) {
        return ("SUCCESS : equals_1\0");
    }

    return ("FAIL    : equals_1\0");
}

char *equals_2()
{
    if (phase_equals("test\0", "tes\0", EMPTY) == Error) {
        return ("SUCCESS : equals_2\0");
    }

    return ("FAIL    : equals_2\0");
}