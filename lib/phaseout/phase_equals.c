/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_equals.c
*/

#include "PHASEOUT.h"

int phase_equals(char *string, char *search, char end)
{
    int string_length = phase_length(string, end);
    int search_length = phase_length(search, end);

    if (string_length == search_length && string_length > 0) {
        for (int i = 0; i < string_length; i++) {
            if (string[i] != search[i]) {
                return (0);
            }
        }
        return (True);
    }

    return (False);
}