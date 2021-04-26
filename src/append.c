#include "phaseout.h"
#include "status.h"

char *append_0()
{
    char *append = phase_append("test\0", "test\0", EMPTY);

    if (phase_equals(append, "testtest\0", EMPTY) == True) {
        free(append);

        return ("SUCCESS : append_0\0");
    }

    return ("FAIL    : append_0\0");
}

char *append_1()
{
    char *append = phase_append("test\0", "t\0", EMPTY);

    if (phase_equals(append, "testt\0", EMPTY) == True) {
        free(append);

        return ("SUCCESS : append_1\0");
    }

    return ("FAIL    : append_1\0");
}

char *append_2()
{
    char *append = phase_append("test\0", " another test\0", EMPTY);

    if (phase_equals(append, "test another test\0", EMPTY) == True) {
        free(append);

        return ("SUCCESS : append_2\0");
    }

    return ("FAIL    : append_2\0");
}