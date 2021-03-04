/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** PHASEOUT.h
*/

#ifndef essential
    #define essential

    #include <stddef.h>
    #include <stdlib.h>
    #include <unistd.h>

    // BOOLEAN
    #define True  1
    #define False 0
    #define Error 84

    // CHARACTERS
    #define EMPTY '\0'
    #define LINE  '\n'
    #define TAB   '\t'

#endif /* essential */

#ifndef phaseout
    #define phaseout

    // DISPLAY
    ssize_t phase_write(char *, char);
    ssize_t phase_writer(char *, char, char);
    ssize_t phase_writenum(int);
    ssize_t phase_writechar(char);
    ssize_t phase_writeline(char *, char);

    // CHECK
    size_t phase_equals(char *, char *, char);
    size_t phase_endswith(char *, char *, char);
    size_t phase_prime(size_t);
    size_t phase_cnf(char *);

    // MANIPULATION
    char *phase_set(char *, char);
    char **phase_sset(char *, char *, char);
    char *phase_append(char *, char *, char);
    char *phase_insert(char *, char, char);
    char *phase_reverse(char *, char);
    char **phase_split(char *, char, char, char *);
    char *phase_hyper(char *, char **, char);
    char *phase_purge(char *, char, char);

    // LENGTH
    size_t phase_length(char *, char);
    size_t phase_llength(char **, char *);
    size_t phase_nlength(size_t);
    size_t phase_count(char *, char, char);
    size_t phase_bounce(char *, char, char, char);

    // ALLOCATION
    char *phase_malloc(size_t, char);
    char **phase_mmalloc(size_t, char *);
    size_t *phase_malloi(size_t, size_t);

    // FREE
    size_t phase_ffree(char **, char *);

    // CONVERT
    int phase_atoi(char *, char);
    char *phase_itoa(size_t, char);
    char *phase_ctoa(char, char);

    // CALCUL
    size_t phase_range(size_t, size_t);

#endif /* phaseout */
