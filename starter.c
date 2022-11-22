/*
** EPITECH PROJECT, 2022
** starter.c
** File description:
** starter.c
*/
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "macro.h"
#include "macroo.h"
int my_getnbr(char const *str);
char *string(char *str)
{
    char *src; struct stat test;
    stat(str, &test);
    int p = test.st_size + 1;
    src = malloc(sizeof(char) * p); int fd = open(str, O_RDONLY);
    int g = read(fd, src, test.st_size); src[g] = '\0';
    return src;
}

int start(char *src)
{
    int i = 0;
    while (src[i] != '\n') {
        i++;
    }
    i++;
    return i;
}

int length(char *src)
{
    int p = 0;
    int i = start(src);
    while (src[i] != '\n') {
        i++; p++;
    }
    return p;
}

star *starter(char *str)
{
    char *src = string(str) ; int p = my_getnbr(src); char **av; int v = p + 1;
    av = malloc(sizeof(char *) * v); int i = start(src), g = length(src);
    int c = 0, j = 0, z = 0, t = g + 1;
    star *star; star = malloc(sizeof(*star));
    if (error(src, p, g) == 84) {
        star->l = -84; return star;
    }
    while (c < p) {
        av[c] = malloc(sizeof(char) * t);
        c++;
    }
    while (src[i] != '\0') {
        if (src[i] == '\n') {
            av[j][z] = '\0';
            i++; j++; z = 0;
        } else {
            av[j][z] = src[i]; i++; z++;
        }
    }
    star->av = av; star->l = p; star->c = g; return star;
}
