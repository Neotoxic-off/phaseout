/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_split.c
*/

#include "PHASEOUT.h"

char **phase_split(char *array, char sep, char end, char *s_end)
{
    char **split = phase_mmalloc(phase_count(array, sep, end) + 1, s_end);
    int floor = 0;
    int previous = 0;
    char *append = NULL;

    for (int i = 0; i < phase_length(array, end); i++) {
        if (array[i] == sep) {
            floor++;
        } else {
            if (i == 0 || previous < floor) {
                split[floor] = phase_malloc(1, end);
                previous = floor;
            }
            append = phase_insert(split[floor], array[i], end);
            phase_cnf(split[floor]);
            split[floor] = append;
        }
    }
    return (split);
}