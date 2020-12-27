#include "PHASEOUT.h"
#include "STATUS.h"

char *bounce_0()
{
    if (phase_bounce("a simple test\0", 'A', 'Z', EMPTY) == 0) {
        return ("SUCCESS : bounce_0\0");
    }

    return ("FAIL    : bounce_0\0");
}

char *bounce_1()
{
    if (phase_bounce("Another Simple Test\0", 'A', 'Z', EMPTY) == 3) {
        return ("SUCCESS : bounce_1\0");
    }

    return ("FAIL    : bounce_1\0");
}

char *bounce_2()
{
    if (phase_bounce("Just 1 test 4 bounce\0", '0', '9', EMPTY) == 2) {
        return ("SUCCESS : bounce_2\0");
    }

    return ("FAIL    : bounce_2\0");
}