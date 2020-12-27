/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** PHASEOUT.h
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef essential
#define essential

// BOOLEAN
#define True  1
#define False 0
#define Error -1

#define EError

// CHARACTERS
#define EMPTY '\0'
#define LINE  '\n'
#define TAB   '\t'

#endif

// DISPLAY
int phase_write(char *, char);
int phase_writer(char *, char, char);
int phase_writenum(int);
int phase_writechar(char);
int phase_writeline(char *, char);

// CHECK
int phase_equals(char *, char *, char);
int phase_prime(int);
int phase_cnf(char *);

// MANIPULATION
char *phase_set(char *, char);
char *phase_append(char *, char *, char);
char *phase_insert(char *, char, char);
char *phase_reverse(char *, char);
char **phase_split(char *, char, char, char *);
char *phase_hyper(char *, char **, char);

// LENGTH
int phase_length(char *, char);
int phase_llength(char **, char *);
int phase_nlength(int);
int phase_count(char *, char, char);
int phase_bounce(char *, char, char, char);

// ALLOCATION
char *phase_malloc(int, char);
char **phase_mmalloc(int, char *);
int *phase_malloi(int, int);

// FREE
int phase_ffree(char **, char *);

// CONVERT
int phase_atoi(char *, char);
char *phase_itoa(int, char);
char *phase_tostring(char, char);

// CALCUL
int phase_range(int, int);
