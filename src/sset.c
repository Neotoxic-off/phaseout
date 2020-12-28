#include "PHASEOUT.h"
#include "STATUS.h"

char *sset_0()
{
    char **array = phase_sset("test_1, test_2\0", NULL, EMPTY);

    if (phase_equals(array[0], "test_1", EMPTY) == True &&
    phase_equals(array[1], "test_2", EMPTY) == True) {
        phase_ffree(array, NULL);

        return ("SUCCESS : sset_0\0");
    }

    return ("FAIL    : sset_0\0");
}

char *sset_1()
{
    char **array = phase_sset("0, 1, 2, 3, 4\0", NULL, EMPTY);

    if (phase_equals(array[0], "0", EMPTY) == True &&
    phase_equals(array[1], "1", EMPTY) == True &&
    phase_equals(array[2], "2", EMPTY) == True &&
    phase_equals(array[3], "3", EMPTY) == True &&
    phase_equals(array[4], "4", EMPTY) == True) {
        phase_ffree(array, NULL);

        return ("SUCCESS : sset_1\0");
    }

    return ("FAIL    : sset_1\0");
}

char *sset_2()
{
    char **array = phase_sset("space removed, here too\0", NULL, EMPTY);

    if (phase_equals(array[0], "spaceremoved", EMPTY) == True &&
    phase_equals(array[1], "heretoo", EMPTY) == True) {
        phase_ffree(array, NULL);

        return ("SUCCESS : sset_2\0");
    }

    return ("FAIL    : sset_2\0");
}