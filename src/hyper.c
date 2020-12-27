#include "PHASEOUT.h"
#include "STATUS.h"

char *hyper_0()
{
    char *array[2] = { "1", "2" };  
    char *data = phase_hyper("test $ done and test $ done\0", array, EMPTY);

    if (phase_equals(data, "test 1 done and test 2 done", EMPTY) == True) {
        free(data);

        return ("SUCCESS : hyper_0\0");
    }

    return ("FAIL    : hyper_0\0");
}

char *hyper_1()
{
    char *array[5] = { "0", "1", "2", "3", "4" };  
    char *data = phase_hyper("test $ done and test $ done\0", array, EMPTY);

    if (phase_equals(data, "test 0 done and test 1 done", EMPTY) == True) {
        free(data);

        return ("SUCCESS : hyper_1\0");
    }

    return ("FAIL    : hyper_1\0");
}