#include "phaseout.h"
#include "status.h"

char *cnf_0()
{
    char *data = phase_set("not empty", EMPTY);

    if (phase_cnf(data) == 1) {
        return ("SUCCESS : cnf_0\0");
    }

    return ("FAIL    : cnf_0\0");
}

char *cnf_1()
{
    char *data = NULL;

    if (phase_cnf(data) == 0) {
        return ("SUCCESS : cnf_1\0");
    }

    return ("FAIL    : cnf_1\0");
}

char *cnf_2()
{
    char *data = phase_set("", EMPTY);

    if (phase_cnf(data) == 1) {
        return ("SUCCESS : cnf_2\0");
    }

    return ("FAIL    : cnf_2\0");
}