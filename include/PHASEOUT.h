#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#define True  1
#define False 0
#define Error -1

#define EMPTY '\0'
#define LINE  '\n'
#define TAB   '\t'

// DISPLAY
int phase_writenum(int);
int phase_writechar(char);
int phase_writeline(char *, char);

// CHECK
int phase_equals(char *, char *, char);
int phase_prime(int);

// MANIPULATION
char *phase_set(char *, char);
char *phase_append(char *, char*, char);
char *phase_reverse(char *, char);
char **phase_split(char *, char, char, char *, char);

// LENGTH
int phase_length(char *, char);
int phase_llength(char **, char *);
int phase_nlength(int);
int phase_count(char *, char, char);
int phase_bouce(char *, char, char, char);

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
