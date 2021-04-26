/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_extension.c
*/

#include "phaseout.h"

size_t phase_extension(char *file, char *extension, char end)
{
    size_t result = False;
    char **extensions = NULL;

    if (phase_contains(file, '.', end) == True) {
        extensions = phase_split(file, '.', end, NULL);
        result = phase_equals(
            extensions[phase_llength(extensions, NULL) - 1], extension, end
        );
        phase_ffree(extensions, NULL);
    }
    return (result);
}
