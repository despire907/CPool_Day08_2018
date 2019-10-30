/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/

#include <stdlib.h>
#include <stdio.h>

int my_putstr(char *str);

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int v = 0;
    int h = 0;
    char *dest = malloc(sizeof(char) * (argc + 1));

    while (i < argc) {
        while (argv[i][v] != '\0') {
            dest[h] = argv[i][v];
            ++h;
            ++v;
        }
        v = 0;
        if (i != argc - 1)
        dest[h] = '\n';
        ++h;
        ++i;
    }
    dest[h] = '\0';
    return (dest);
}
