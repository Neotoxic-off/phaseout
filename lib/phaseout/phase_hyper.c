/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_hyper.c
*/

#include "PHASEOUT.h"

int multi_free(char *new_sentence)
{
    if (new_sentence)
        free(new_sentence);
    
    return (0);
}

char *phase_hyper(char *sentence, char **content, char end)
{
    int len_sentence = phase_length(sentence, end);
    int index = 0;
    char indexer = '$';
    char *new_sentence = phase_malloc(len_sentence, end);
    char *tmp = NULL;

    for (int i = 0; i < len_sentence; i++) {
        if (sentence[i] == indexer) {
            tmp = phase_set(new_sentence, end);
            multi_free(new_sentence);
            new_sentence = phase_append(tmp, content[index], end);
            index++;
        } else {
            tmp = phase_set(new_sentence, end);
            multi_free(new_sentence);
            new_sentence = phase_insert(tmp, sentence[i], end);
        }
        multi_free(tmp);
    }

    return (new_sentence);
}