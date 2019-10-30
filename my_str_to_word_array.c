/*
** EPITECH PROJECT, 2018
** task04
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int look_charac(char c)
{
    if (c >= '0' && c <= '9' ||
        c >= 'A' && c <= 'Z' ||
        c >= 'a' && c <= 'z')
        return(1);
    return(0);
}

int count(char const *str)
{
    int d = 0;
    int p = 0;
    
    while (str[d] != '\0'){
        if (look_charac(str[d]) == 1 &&
            look_charac(str[d + 1]) != 1)
            p = p + 1;
        d = d + 1;
    }
    return (p);
}

int word_word(char *str, int c)
{
    while (str[c] != '\0') {
        if (look_charac(str[c]) != 1)
            return (c);
        c++;
    }
    return (c);
}

char **my_str_to_word_array(char const *str)
{
    int y = count(str);
    int v = 0;
    int i = 0;
    int h = 0;
    char **res = malloc(sizeof(char *) * y + 1);

    while (i < y){
        h = 0;
        while (str[v] != '\0' && look_charac(str[v]) != 0) {
            res[i][h] = str[v];
            h = h + 1;
            v = v + 1;
        }
        res[i][h] = '\n';
        res[i][h + 1] = '\0';
        v = v + 1;
        i = i + 1;
    }
    free(res);
    return (res);
}

int main()
{
	char vih = "oh j'ai un vih oui un vih";
	my_str_to_word_array(vih);
}
