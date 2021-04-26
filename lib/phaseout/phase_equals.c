/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_equals.c
*/

#include "phaseout.h"

size_t phase_equals(char *string, char *search, char end)
{
    size_t string_length = phase_length(string, end);
    size_t search_length = phase_length(search, end);

    if (string_length == search_length && string_length > 0) {
        for (size_t i = 0; i < string_length; i++) {
            if (string[i] != search[i]) {
                return (False);
            }
        }
        return (True);
    }

    return (Error);
}
