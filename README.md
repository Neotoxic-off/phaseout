<p align = "center">
    <img alt = "logo" width="500" height="100" src = "https://raw.githubusercontent.com/Neotoxic-off/phaseout/main/img/logo.png"/>
<p/>

<p align = "center">
    <img src="https://img.shields.io/badge/Language-red?style=for-the-badge&logo=C">
    <img src="https://img.shields.io/badge/0.8.0-purple?style=for-the-badge&logo=V">
    <img src="https://img.shields.io/badge/Status-in%20development-green?style=for-the-badge">
<p/>

*Let's make the C even better*

<a href = "https://github.com/Neotoxic-off/phaseout/blob/master/DOCUMENTATION.md">DOCUMENTATION</a>

## DEFINE

```H
// BOOLEAN
#define True  1
#define False 0
#define Error -1

// CHARACTERS
#define EMPTY '\0'
#define LINE  '\n'
#define TAB   '\t'
```

## FUNCTIONS

## DISPLAY
```C
int phase_write(char*, char);
int phase_writer(char*, char, char);
int phase_writenum(int);
int phase_writechar(char);
int phase_writeline(char *, char);
```

### CHECK
```C
int phase_equals(char *, char *, char);
int phase_prime(int);
int phase_cnf(char *);
```

## MANIPULATION
```C
char *phase_set(char *, char);
char *phase_append(char *, char *, char);
char *phase_reverse(char *, char);
char **phase_split(char *, char, char, char *);
char *phase_insert(char *, char, char);
char *phase_hyper(char *, char **, char);
```

## LENGTH
```C
int phase_length(char *, char);
int phase_llength(char **, char *);
int phase_nlength(int);
int phase_count(char *, char, char);
int phase_bounce(char *, char, char, char);
```

## ALLOCATION
```C
char *phase_malloc(int, char);
char **phase_mmalloc(int, char *);
int *phase_malloi(int, int);
```

## FREE
```C
int phase_ffree(char **, char *);
```

## CONVERT
```C
int phase_atoi(char *, char);
char *phase_itoa(int, char);
char *phase_tostring(char, char);
```