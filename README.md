<p align = "center">
    <img alt = "logo" width="500" height="100" src = "https://raw.githubusercontent.com/Neotoxic-off/phaseout/main/img/logo.png"/>
<p/>

<p align = "center">
    <img src="https://img.shields.io/badge/Language-red?style=for-the-badge&logo=C">
    <img src="https://img.shields.io/badge/2.2.0-purple?style=for-the-badge&logo=V">
    <img src="https://img.shields.io/badge/status-in%20development-green?style=for-the-badge">
<p/>

*💉 Let's mod the C*

<a href = "https://github.com/Neotoxic-off/phaseout/blob/main/DOCUMENTATION.md">DOCUMENTATION</a>

## REQUIREMENTS

- CLANG

## DEFINE

```H
// BOOLEAN
#define True  1
#define False 0
#define Error 84

// CHARACTERS
#define EMPTY '\0'
#define LINE  '\n'
#define SPACE ' '
#define TAB   '\t'

// STRINGS
#define S_EMPTY "\0"
#define S_LINE  "\n"
#define S_SPACE " "
#define S_TAB   "\t"
#define S_TAB_2 "  "
#define S_TAB_4 "    "
```

## FUNCTIONS

## DISPLAY
```C
ssize_t phase_write(char*, char);
ssize_t phase_writer(char*, char, char);
ssize_t phase_writenum(int);
ssize_t phase_writechar(char);
ssize_t phase_writeline(char *, char);
```

### CHECK
```C
size_t phase_equals(char *, char *, char);
size_t phase_endswith(char *, char *, char);
size_t phase_prime(int);
size_t phase_cnf(char *);
size_t phase_contains(char *, char, char);
size_t phase_extension(char *, char *, char);
size_t phase_startswith(char *, char *, char);
```

## MANIPULATION
```C
char *phase_set(char *, char);
char **phase_sset(char *, char *, char);
char *phase_append(char *, char *, char);
char *phase_reverse(char *, char);
char **phase_split(char *, char, char, char *);
char *phase_insert(char *, char, char);
char *phase_hyper(char *, char **, char);
char *phase_purge(char *, char, char);
```

## LENGTH
```C
size_t phase_length(char *, char);
size_t phase_llength(char **, char *);
size_t phase_nlength(int);
size_t phase_count(char *, char, char);
size_t phase_bounce(char *, char, char, char);
```

## ALLOCATION
```C
char *phase_malloc(int, char);
char **phase_mmalloc(int, char *);
size_t *phase_malloi(int, int);
```

## FREE
```C
size_t phase_ffree(char **, char *);
```

## CONVERT
```C
int phase_atoi(char *, char);
char *phase_itoa(int, char);
char *phase_ctoa(char, char);
```

## Authors

[![Neotoxic-off](https://avatars3.githubusercontent.com/u/44700383?s=100&u=5200eed594ec5ca91b694b0064ab67c9d5c5c85d&v=4)](https://github.com/Neotoxic-off) |
--- |
[Neotoxic-off](https://github.com/Neotoxic-off) |

[![0xmoss](https://avatars.githubusercontent.com/u/58813988?s=100&u=894efec02067afe96f0fb41a64ee59cb0a4ca1ee&v=4)](https://github.com/0xmoss) |
--- |
[0xmoss](https://github.com/0xmoss) |

## Contributors

[Contributors](https://github.com/Neotoxic-off/phaseout/graphs/contributors)
