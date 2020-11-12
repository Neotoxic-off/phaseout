#include "PHASEOUT.h"

char **phase_split(char *array, char sep, char end, char *s_end, char f_end)
{
    int array_length = phase_length(array, end);
    int character_count = phase_count(array, sep, end);
    char **split = phase_mmalloc(character_count + 1, s_end);
    int floor = 0;
    int previous = 0;
    char *append = NULL;
    char *string = NULL;

    for (int i = 0; i < array_length; i++) {
        if (array[i] == sep) {
            floor++;
        } else {
            if (i == 0 || previous < floor) {
                split[floor] = phase_malloc(1, f_end);
                previous = floor;
            }
            string = phase_tostring(array[i], f_end);
            append = phase_append(split[floor], string, f_end);
            free(string);
            free(split[floor]);
            split[floor] = append;
        }
    }
    return (split);
}