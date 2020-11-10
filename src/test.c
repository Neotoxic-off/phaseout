#include "PHASEOUT.h"

char* test_is_equal()
{
    if (phase_equals("test\0", "test\0", '\0') == 1) {
        return ("SUCCESS : is equal\n\0");
    }

    return ("FAIL    : is equal\n\0");
}

char* test_is_not_equal()
{
    if (phase_equals("test\0", "tess\0", '\0') == 0) {
        return ("SUCCESS : is not equal\n\0");
    }

    return ("FAIL    : is not equal\n\0");
}

char* test_wrong_string_equal()
{
    if (phase_equals("test\0", "tes\0", '\0') == -1) {
        return ("SUCCESS : wrong string equal\n\0");
    }

    return ("FAIL    : wrong string equal\n\0");
}

char* test_string_append()
{
    if (phase_equals(phase_append("test\0", "test\0", '\0'), "testtest\0", '\0') == 1) {
        return ("SUCCESS : string append\n\0");
    }

    return ("FAIL    : string append\n\0");
}

char* test_char_append()
{
    if (phase_equals(phase_append("test\0", "t\0", '\0'), "testt\0", '\0') == 1) {
        return ("SUCCESS : char append\n\0");
    }

    return ("FAIL    : char append\n\0");
}

char* test_set()
{
    char* array = phase_set("test", '\0');

    if (phase_equals(array, "test\0", '\0')) {
        return ("SUCCESS : set\n\0");
    }

    return ("FAIL    : set\n\0");
}


int main(void)
{
    // EQUAL
    phase_putstr(test_is_equal(), '\0');
    phase_putstr(test_is_not_equal(), '\0');
    phase_putstr(test_wrong_string_equal(), '\0');

    // APPEND
    phase_putstr(test_string_append(), '\0');
    phase_putstr(test_char_append(), '\0');

    // SET
    phase_putstr(test_set(), '\0');
    
    return (0);
}