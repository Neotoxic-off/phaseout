#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int phase_putchar(char);
int phase_putstr(char*, char);

char* phase_set(char*, char);

char *phase_append(char *, char*, char);
char *phase_malloc(int, char);
int phase_length(char *, char);
char *phase_malloc(int, char);
int phase_equals(char*, char*, char);