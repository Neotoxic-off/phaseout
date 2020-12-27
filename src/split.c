#include "PHASEOUT.h"
#include "STATUS.h"

char *split_0()
{
    char *array = phase_set("split_0/", EMPTY);
    char **splitted = phase_split(array, '/', EMPTY, NULL);

    if (phase_equals(splitted[0], "split_0\0", EMPTY) == True) {
        free(array);
        phase_ffree(splitted, NULL);

        return ("SUCCESS : split_0\0");
    }

    return ("FAIL    : split_0\0");
}

char *split_1()
{
    char *array = phase_set("split_0/split_1", EMPTY);
    char **splitted = phase_split(array, '/', EMPTY, NULL);

    if (phase_equals(splitted[1], "split_1\0", EMPTY) == True && phase_equals(splitted[1], "split_1\0", EMPTY) == True) {
        free(array);
        phase_ffree(splitted, NULL);

        return ("SUCCESS : split_1\0");
    }

    return ("FAIL    : split_1\0");
}

char *split_2()
{
    char *array = phase_set("split_0/split_1/split_2", EMPTY);
    char **splitted = phase_split(array, '/', EMPTY, NULL);

    if (phase_equals(splitted[2], "split_2\0", EMPTY) == True && phase_equals(splitted[1], "split_1\0", EMPTY) == True && phase_equals(splitted[2], "split_2\0", EMPTY) == True) {
        free(array);
        phase_ffree(splitted, NULL);

        return ("SUCCESS : split_2\0");
    }

    return ("FAIL    : split_2\0");
}