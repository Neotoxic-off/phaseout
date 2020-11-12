#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

// BOOLEAN
#define True  1
#define False 0
#define Error -1

// CHARACTERS
#define EMPTY '\0'
#define LINE  '\n'
#define TAB   '\t'

// COLORS NORMAL
#define NORMAL  "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// COLORS BOLD
#define B_NORMAL  "\033[1;0m"
#define B_RED     "\033[1;31m"
#define B_GREEN   "\033[1;32m"
#define B_YELLOW  "\033[1;33m"
#define B_BLUE    "\033[1;34m"
#define B_MAGENTA "\033[1;35m"
#define B_CYAN    "\033[1;36m"
#define B_WHITE   "\033[1;37m"

// DISPLAY
int phase_writenum(int);
int phase_writechar(char);
int phase_writeline(char *, char);

// CHECK
int phase_equals(char *, char *, char);
int phase_prime(int);

// MANIPULATION
char *phase_set(char *, char);
char *phase_append(char *, char *, char);
char *phase_reverse(char *, char);
char **phase_split(char *, char, char, char *, char);

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
