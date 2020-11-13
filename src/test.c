#include "PHASEOUT.h"

// CHECK
char *test_is_equal()
{
    if (phase_equals("test\0", "test\0", EMPTY) == True) {
        return ("SUCCESS : is equal\0");
    }

    return ("FAIL    : is equal\0");
}

char *test_is_not_equal()
{
    if (phase_equals("test\0", "tess\0", EMPTY) == False) {
        return ("SUCCESS : is not equal\0");
    }

    return ("FAIL    : is not equal\0");
}

char *test_wrong_string_equal()
{
    if (phase_equals("test\0", "tes\0", EMPTY) == Error) {
        return ("SUCCESS : wrong string equal\0");
    }

    return ("FAIL    : wrong string equal\0");
}

// MANIPULATION
char *test_string_append()
{
    char *append = phase_append("test\0", "test\0", EMPTY);

    if (phase_equals(append, "testtest\0", EMPTY) == True) {
        free(append);

        return ("SUCCESS : string append\0");
    }

    return ("FAIL    : string append\0");
}

char *test_char_append()
{
    char *append = phase_append("test\0", "t\0", EMPTY);

    if (phase_equals(append, "testt\0", EMPTY) == True) {
        free(append);

        return ("SUCCESS : char append\0");
    }

    return ("FAIL    : char append\0");
}

char *test_set()
{
    char *array = phase_set("test", EMPTY);

    if (phase_equals(array, "test\0", EMPTY) == True) {
        free(array);

        return ("SUCCESS : set\0");
    }

    return ("FAIL    : set\0");
}

char *test_split_1()
{
    char *array = phase_set("split_0/", EMPTY);
    char **splitted = phase_split(array, '/', EMPTY, NULL);

    if (phase_equals(splitted[0], "split_0\0", EMPTY) == True) {
        free(array);
        phase_ffree(splitted, NULL);

        return ("SUCCESS : test split 1\0");
    }

    return ("FAIL    : test split 1\0");
}

char *test_split_2()
{
    char *array = phase_set("split_0/split_1", EMPTY);
    char **splitted = phase_split(array, '/', EMPTY, NULL);

    if (phase_equals(splitted[0], "split_0\0", EMPTY) == True && phase_equals(splitted[1], "split_1\0", EMPTY) == True) {
        free(array);
        phase_ffree(splitted, NULL);

        return ("SUCCESS : test split 2\0");
    }

    return ("FAIL    : test split 2\0");
}

char *test_split_3()
{
    char *array = phase_set("split_0/split_1/split_2", EMPTY);
    char **splitted = phase_split(array, '/', EMPTY, NULL);

    if (phase_equals(splitted[0], "split_0\0", EMPTY) == True && phase_equals(splitted[1], "split_1\0", EMPTY) == True && phase_equals(splitted[2], "split_2\0", EMPTY) == True) {
        free(array);
        phase_ffree(splitted, NULL);

        return ("SUCCESS : test split 3\0");
    }

    return ("FAIL    : test split 3\0");
}

char *test_bounce_1()
{
    if (phase_bounce("a simple test\0", 'A', 'Z', EMPTY) == 0) {
        return ("SUCCESS : test bounce 1\0");
    }

    return ("FAIL    : test bounce 1\0");
}

char *test_bounce_2()
{
    if (phase_bounce("Another Simple Test\0", 'A', 'Z', EMPTY) == 3) {
        return ("SUCCESS : test bounce 2\0");
    }

    return ("FAIL    : test bounce 2\0");
}

char *test_bounce_3()
{
    if (phase_bounce("Just 1 test 4 bounce\0", '0', '9', EMPTY) == 2) {
        return ("SUCCESS : test bounce 3\0");
    }

    return ("FAIL    : test bounce 3\0");
}

char *test_count_1()
{
    if (phase_count("Character counter\0", 'e', EMPTY) == 2) {
        return ("SUCCESS : test count 1\0");
    }

    return ("FAIL    : test count 1\0");
}

// CONVERT
char *test_atoi()
{
    if (phase_atoi("123\0", EMPTY) == 123) {
        return ("SUCCESS : test atoi\0");
    }

    return ("FAIL    : test atoi\0");
}


int main(void)
{
    phase_writeline("\nSTARTING TESTS\0", EMPTY);

    // EQUAL
    phase_writeline("\n---------- EQUAL ----------\n\0", EMPTY);
    phase_writeline(test_is_equal(), EMPTY);
    phase_writeline(test_is_not_equal(), EMPTY);
    phase_writeline(test_wrong_string_equal(), EMPTY);

    // APPEND
    phase_writeline("\n---------- APPEND ----------\n\0", EMPTY);
    phase_writeline(test_string_append(), EMPTY);
    phase_writeline(test_char_append(), EMPTY);

    // SET
    phase_writeline("\n---------- SET ----------\n\0", EMPTY);
    phase_writeline(test_set(), EMPTY);


    // SPLIT
    phase_writeline("\n---------- SPLIT ----------\n\0", EMPTY);
    phase_writeline(test_split_1(), EMPTY);
    phase_writeline(test_split_2(), EMPTY);
    phase_writeline(test_split_3(), EMPTY);

    // ATOI
    phase_writeline("\n---------- ATOI ----------\n\0", EMPTY);
    phase_writeline(test_atoi(), EMPTY);

    // BOUNCE
    phase_writeline("\n---------- BOUNCE ----------\n\0", EMPTY);
    phase_writeline(test_bounce_1(), EMPTY);
    phase_writeline(test_bounce_2(), EMPTY);
    phase_writeline(test_bounce_3(), EMPTY);

    // COUNT
    phase_writeline("\n---------- COUNT ----------\n\0", EMPTY);
    phase_writeline(test_count_1(), EMPTY);

    phase_writeline("\nTESTS COMPLETED\n\0", EMPTY);
    return (0);
}