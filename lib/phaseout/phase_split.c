/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_split.c
*/

#include "PHASEOUT.h"

int full_free(char *string, char *split)
{
    free(string);
    free(split);

    return (0);
}

char **phase_split(char *array, char sep, char end, char *s_end)
{
    char **split = phase_mmalloc(phase_count(array, sep, end) + 1, s_end);
    int floor = 0;
    int previous = 0;
    char *append = NULL;
    char *string = NULL;

    for (int i = 0; i < phase_length(array, end); i++) {
        if (array[i] == sep) {
            floor++;
        } else {
            if (i == 0 || previous < floor) {
                split[floor] = phase_malloc(1, end);
                previous = floor;
            }
            string = phase_tostring(array[i], end);
            append = phase_append(split[floor], string, end);
            full_free(string, split[floor]);
            split[floor] = append;
        }
    }
    return (split);
}