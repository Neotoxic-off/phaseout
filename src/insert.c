#include "phaseout.h"
#include "status.h"

char *insert_0()
{
    char *data = phase_insert("this is my test\0", 's', EMPTY);

    if (phase_equals(data, "this is my tests\0", EMPTY) == True) {
        free(data);

        return ("SUCCESS : insert_0\0");
    }

    return ("FAIL    : insert_0\0");
}

char *insert_1()
{
    char *data = phase_insert("this is my test\0", '0', EMPTY);

    if (phase_equals(data, "this is my test0\0", EMPTY) == True) {
        free(data);

        return ("SUCCESS : insert_1\0");
    }

    return ("FAIL    : insert_1\0");
}

char *insert_2()
{
    char *data = phase_insert("this is my test\0", '\n', EMPTY);

    if (phase_equals(data, "this is my test\n\0", EMPTY) == True) {
        free(data);

        return ("SUCCESS : insert_2\0");
    }

    return ("FAIL    : insert_2\0");
}