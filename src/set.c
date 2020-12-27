#include "PHASEOUT.h"
#include "STATUS.h"

char *set_0()
{
    char *array = phase_set("test", EMPTY);

    if (phase_equals(array, "test\0", EMPTY) == True) {
        free(array);

        return ("SUCCESS : set_0\0");
    }

    return ("FAIL    : set_0\0");
}

char *set_1()
{
    char *array = phase_set("test", EMPTY);

    if (phase_length(array, EMPTY) == 4) {
        free(array);

        return ("SUCCESS : set_1\0");
    }

    return ("FAIL    : set_1\0");
}

char *set_2()
{
    char *array = phase_set("\n", EMPTY);

    if (phase_length(array, EMPTY) == 1) {
        free(array);

        return ("SUCCESS : set_2\0");
    }

    return ("FAIL    : set_2\0");
}