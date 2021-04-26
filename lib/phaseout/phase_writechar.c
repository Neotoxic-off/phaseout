/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_writechar.c
*/

#include "phaseout.h"

ssize_t phase_writechar(char c)
{
    int fd = 1;
    size_t size = 1;

    return (write(fd, &c, size));
}
