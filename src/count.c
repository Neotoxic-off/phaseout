#include "phaseout.h"
#include "status.h"

char *count_0()
{
    if (phase_count("Character counter\0", 'e', EMPTY) == 2) {
        return ("SUCCESS : count_0\0");
    }

    return ("FAIL    : count_0\0");
}

char *count_1()
{
    if (phase_count("Ch4r4cter counter 4 4ll\0", '4', EMPTY) == 4) {
        return ("SUCCESS : count_1\0");
    }

    return ("FAIL    : count_1\0");
}

char *count_2()
{
    if (phase_count("Ch\nrac\ner cou\nter\0", '\n', EMPTY) == 3) {
        return ("SUCCESS : count_2\0");
    }

    return ("FAIL    : count_2\0");
}