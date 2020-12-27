#include "PHASEOUT.h"
#include "STATUS.h"

char *purge_0()
{
    if (phase_equals(phase_purge("a simple test\0", ' ', EMPTY), "asimpletest\0", EMPTY) == True) {
        return ("SUCCESS : purge_0\0");
    }

    return ("FAIL    : purge_0\0");
}

char *purge_1()
{
    if (phase_equals(phase_purge("AnA a vA @\0", 'A', EMPTY), "n a v @\0", EMPTY) == True) {
        return ("SUCCESS : purge_1\0");
    }

    return ("FAIL    : purge_1\0");
}

char *purge_2()
{
    if (phase_equals(phase_purge("/nA a \nv/ @\0", '/', EMPTY), "nA a \nv @\0", EMPTY) == True) {
        return ("SUCCESS : purge_2\0");
    }

    return ("FAIL    : purge_2\0");
}