#include "PHASEOUT.h"
#include "STATUS.h"

#include "TEST.h"



// CONVERT
char *test_atoi()
{
    if (phase_atoi("123\0", EMPTY) == 123) {
        return ("SUCCESS : test atoi\0");
    }

    return ("FAIL    : test atoi\0");
}

// STATUS CODE
char *test_status_code_1()
{
    if (phase_atoi("404\0", EMPTY) == NOT_FOUND) {
        return ("SUCCESS : test status code 1\0");
    }

    return ("FAIL    : test status code 1\0");
}

char *test_status_code_2()
{
    if (phase_atoi("200\0", EMPTY) == OK) {
        return ("SUCCESS : test status code 2\0");
    }

    return ("FAIL    : test status code 2\0");
}

int main(void)
{
    phase_writeline(is_equal_0(), EMPTY);
    phase_writeline(is_equal_1(), EMPTY);
    phase_writeline(is_equal_2(), EMPTY);
    phase_writeline(append_0(), EMPTY);
    phase_writeline(append_1(), EMPTY);
    phase_writeline(append_2(), EMPTY);
    phase_writeline(insert_0(), EMPTY);
    phase_writeline(insert_1(), EMPTY);
    phase_writeline(insert_2(), EMPTY);
    phase_writeline(set_0(), EMPTY);
    phase_writeline(set_1(), EMPTY);
    phase_writeline(set_2(), EMPTY);
    phase_writeline(split_0(), EMPTY);
    phase_writeline(split_1(), EMPTY);
    phase_writeline(split_2(), EMPTY);
    phase_writeline(bounce_0(), EMPTY);
    phase_writeline(bounce_1(), EMPTY);
    phase_writeline(bounce_2(), EMPTY);
    phase_writeline(count_0(), EMPTY);
    phase_writeline(count_1(), EMPTY);
    phase_writeline(count_2(), EMPTY);
    phase_writeline(cnf_0(), EMPTY);
    phase_writeline(cnf_1(), EMPTY);
    phase_writeline(cnf_2(), EMPTY);

    return (0);
}