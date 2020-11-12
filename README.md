<p align = "center">
    <img alt = "logo" width="500" height="100" src = "https://raw.githubusercontent.com/Neotoxic-off/phaseout/main/img/logo.png"/>
<p/>

<p align = "center">
    <img src="https://img.shields.io/badge/Language-red?style=for-the-badge&logo=C">
    <img src="https://img.shields.io/badge/0.2.0-purple?style=for-the-badge&logo=V">
    <img src="https://img.shields.io/badge/Status-in%20development-green?style=for-the-badge">
<p/>

*Let's make the C even better*

<a href = "https://github.com/Neotoxic-off/phaseout/blob/master/DOCUMENTATION.md">DOCUMENTATION</a>

## DEFINE

### BOOLEAN
- [X] **True : 1**
- [X] **False : 0**
- [X] **Error: -1**

### CHARACTERS
- [X] **EMPTY : '\0'**
- [X] **LINE : '\n'**
- [X] **TAB: '\t'**

### COLORS NORMAL
- [X] **NORMAL : "\033[0m"**
- [X] **RED : "\033[31m"**
- [X] **GREEN : "\033[32m"**
- [X] **YELLOW : "\033[33m"**
- [X] **BLUE : "\033[34m"**
- [X] **MAGENTA : "\033[35m"**
- [X] **CYAN : "\033[36m"**
- [X] **WHITE : "\033[37m"**

### COLORS BOLD
- [X] **B_NORMAL : "\033[1;0m"**
- [X] **B_RED : "\033[1;31m"**
- [X] **B_GREEN : "\033[1;32m"**
- [X] **B_YELLOW : "\033[1;33m"**
- [X] **B_BLUE : "\033[1;34m"**
- [X] **B_MAGENTA : "\033[1;35m"**
- [X] **B_CYAN : "\033[1;36m"**
- [X] **B_WHITE : "\033[1;37m"**

## FUNCTIONS

## DISPLAY
```C
int phase_writenum(int);
int phase_writechar(char);
int phase_writeline(char *, char);
```

### CHECK
```C
int phase_equals(char *, char *, char);
int phase_prime(int);
```

## MANIPULATION
```C
char *phase_set(char *, char);
char *phase_append(char *, char *, char);
char *phase_reverse(char *, char);
char **phase_split(char *, char, char, char *, char);
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