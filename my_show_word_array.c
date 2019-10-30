/*
** EPITECH PROJECT, 2018
** task03
** File description:
** task03
*/

#include <stdio.h>
#include <stddef.h>

int my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int p = 0;
    int d = 0;

    while (tab[p] != NULL) {
        d = 0;
        while (tab[p][d] != '\0') {
            my_putchar(tab[p][d]);
            ++d;
        }
        my_putchar('\n');
        ++p;
    }
    return (0);
}
