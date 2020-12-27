#include "PHASEOUT.h"
#include "STATUS.h"

char *is_equal_0()
{
    if (phase_equals("test\0", "test\0", EMPTY) == True) {
        return ("SUCCESS : is_equal_0\0");
    }

    return ("FAIL    : is_equal_0\0");
}

char *is_equal_1()
{
    if (phase_equals("test\0", "tess\0", EMPTY) == False) {
        return ("SUCCESS : is_equal_1\0");
    }

    return ("FAIL    : is_equal_1\0");
}

char *is_equal_2()
{
    if (phase_equals("test\0", "tes\0", EMPTY) == Error) {
        return ("SUCCESS : is_equal_2\0");
    }

    return ("FAIL    : is_equal_2\0");
}