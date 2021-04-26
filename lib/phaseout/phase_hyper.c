/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_hyper.c
*/

#include "phaseout.h"

char *phase_hyper(char *sentence, char **content, char end)
{
    size_t len_sentence = phase_length(sentence, end);
    size_t index = 0;
    char indexer = '$';
    char *new_sentence = phase_malloc(len_sentence, end);
    char *tmp = NULL;

    for (size_t i = 0; i < len_sentence; i++) {
        if (sentence[i] == indexer) {
            tmp = phase_set(new_sentence, end);
            phase_cnf(new_sentence);
            new_sentence = phase_append(tmp, content[index], end);
            index++;
        } else {
            tmp = phase_set(new_sentence, end);
            phase_cnf(new_sentence);
            new_sentence = phase_insert(tmp, sentence[i], end);
        }
        phase_cnf(tmp);
    }

    return (new_sentence);
}
