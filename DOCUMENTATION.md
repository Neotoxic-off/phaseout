<p align = "center">
    <img alt = "logo" width="500" height="100" src = "https://raw.githubusercontent.com/Neotoxic-off/phaseout/main/img/logo.png"/>
</p>

*Let's make the C even better*

## DISPLAY


**phase_writenum**: *Print int*

```H
int phase_writenum(int <NUMBER>);
```

**phase_writechar**: *Print char*

```H
int phase_writechar(char <CHARACTER>);
```

**phase_write**: *Print char\**

```H
int phase_write(char *<ARRAY>, char <LAST CHARACTER>);
```

**phase_writer**: *Print char\* with custom last characters*

```H
int phase_writer(char *<ARRAY>, char <LAST CHARACTER>, char <CUSTOM CHARACTER>);
```

**phase_writeline**: *Print char\* with \n*

```H
int phase_writeline(char *<ARRAY>, char <LAST CHARACTER>);
```

## CHECK

**phase_equals**: *Check if chars \* are equal*

```H
int phase_equals(char *<ARRAY 1>, char *<ARRAY 2>, char <LAST CHARACTER>);
```

**phase_prime**: *Check if int is prime*

```H
int phase_prime(int <NUMBER>);
```

**phase_cnf**: *Check and free*

```H
int phase_cnf(char *<ARRAY>);
```

## MANIPULATION

**phase_set**: *Allocate char\* with content*

```H
char *phase_set(char *<ARRAY>, char <LAST CHARACTER>);
```

**phase_append**: *Add char\* after the previous char\**

```H
char *phase_append(char *<BASE>, char *<ADD>, char <LAST CHARACTER>);
```

**phase_reverse**: *Reverse char\* content*

```H
char *phase_reverse(char *<ARRAY>, char <LAST CHARACTER>);
```

**phase_split**: *Split char\* in char\*\**

```H
char **phase_split(char *<ARRAY>, char <SPLIT CHARACTER>, char <LAST CHARACTER>, char *<LAST ARRAY>);
```

**phase_insert**: *Add char at the end of the char\**

```H
char *phase_insert(char *<ARRAY>, char <ADD>, char <LAST CHARACTER>);
```

**phase_hyper**: *Set multiple characters to char*

```H
char *phase_hyper(char *<BASE>, char **<ARRAY>, char <LAST CHARACTER>);
```

## LENGTH

**phase_length**: *Count char\* length*

```H
int phase_length(char *<ARRAY>, char <LAST CHARACTER>);
```

**phase_llength**: *Count char\*\* length*

```H
int phase_llength(char **<ARRAY>, char *<LAST ARRAY>);
```

**phase_nlength**: *Count int length*

```H
int phase_nlength(int <NUMBER>);
```

**phase_count**: *Count number of char in char\**

```H
int phase_count(char *<ARRAY>, char <CHARACTER>, char <LAST CHARACTER>);
```

**phase_bounce**: *Count number of char between 2 char in char\**

```H
int phase_bounce(char *<ARRAY>, char <CHARACTER>, char <LAST CHARACTER>);
```

## ALLOCATION

**phase_malloc**: *Malloc char\* with sizeof and extra length for the last character*

```H
char *phase_malloc(int <SIZE>, char <LAST CHARACTER>);
```

**phase_mmalloc**: *Malloc char\*\* with sizeof and extra length for the last array*

```H
int *phase_mmalloc(int <SIZE>, char *<LAST ARRAY>);
```

**phase_malloi**: *Malloc int\* with sizeof and extra length for the last character*

```H
int *phase_malloi(int <SIZE>, char <LAST CHARACTER>);
```

## FREE

**phase_ffree**: *Full free char\*\**

```H
int phase_ffree(char **<ARRAY>, char *<LAST ARRAY>);
```

## CONVERT

**phase_atoi**: *Convert char\* to int*

```H
int phase_atoi(char *<ARRAY>, char <LAST CHARACTER>);
```

**phase_itoa**: *Convert int to char\**

```H
char *phase_itoa(int <NUMBER>, char <LAST CHARACTER>);
```

**phase_tostring**: *Convert char to char\**

```H
char *phase_tostring(char <CHARACTER>, char <LAST CHARACTER>);;
```


