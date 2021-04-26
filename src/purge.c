#include "phaseout.h"
#include "status.h"

char *purge_0()
{
    char *data = phase_purge("a simple test\0", ' ', EMPTY);

    if (phase_equals(data, "asimpletest\0", EMPTY) == True) {
        free(data);
        return ("SUCCESS : purge_0\0");
    }

    return ("FAIL    : purge_0\0");
}

char *purge_1()
{
    char *data = phase_purge("AnA a vA @\0", 'A', EMPTY);

    if (phase_equals(data, "n a v @\0", EMPTY) == True) {
        free(data);
        return ("SUCCESS : purge_1\0");
    }

    return ("FAIL    : purge_1\0");
}

char *purge_2()
{
    char *data = phase_purge("/nA a \nv/ @\0", '/', EMPTY);

    if (phase_equals(data, "nA a \nv @\0", EMPTY) == True) {
        free(data);
        return ("SUCCESS : purge_2\0");
    }

    return ("FAIL    : purge_2\0");
}