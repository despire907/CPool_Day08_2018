/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int l = 0;
    char *t;

    while (*src != '\0') {
        ++l;
        ++src;
    }
    src = src - l;
    t = malloc(sizeof(char) * (l + 1));
    while (*src != '\0') {
        *t = *src;
        ++src;
        ++t;
    }
    *t = *src;
    t = t - l;
    return (t);
}
