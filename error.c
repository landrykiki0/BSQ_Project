/*
** EPITECH PROJECT, 2022
** error.c
** File description:
** error.c
*/
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "macro.h"
#include "macroo.h"

char *generator(char *str, int g , int n)
{
    int j = 1, v = 0; int q = g + 1;
    int k = my_strlen(str);
    char *svr; svr = malloc(sizeof(char*) * (n + 1));
    int i = 0; int m = n / g; int b = 1;
    int c = 0; int z = 0; int h = 0; j = 0;
    while (j < n) {
        if (b == (g + 1)) {
            b = 1;
        }
        if (b == g) {
            svr[j] = str[0];
            j++; b++;
        }
        if (b != g && b != g + 1) {
            svr[j] = str[b];
            j++; b++;
        }
    }
    svr[j] = '\0';
    return svr;
}

star *starter2(int n, char *str)
{
    star *star; char **av; int g = my_strlen(str);
    star = malloc(sizeof(*star));
    int p = n + 1; int j = 0;
    av = malloc(sizeof(char *) * p);
    int i = 0; int m = n / g; int b = 0;
    int c = 0; int z = 0; int h = 0;char *svr;
    svr = malloc(sizeof(char) * (n + 1));
    while (j < n) {
        if (b == g) {
            b = 0;
        } else {
            svr[j] = str[b]; j++; b++;
        }
    }
    svr[j] = '\0';
    while (i < n) {
        av[i] = svr; i++; svr = generator(svr, g, n);
    }
    star->av = av; star->l = n; star->c = n;
    return star;
}

int checker2(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != 'o' && str[i] != '.' &&
            str[i] != '\n') {
            return 84;
        }
        i++;
    }
    return 1;
}

int error2(char *str)
{
    int n = 0, i = 0;
    char *src; struct stat test;
    int j = stat(str, &test);
    if (j < 0) return 84;
    int p = test.st_size + 1;
    src = malloc(sizeof(char) * p); int fd = open(str, O_RDONLY);
    int g = read(fd, src, test.st_size); src[g] = '\0';
    while (src[i] != '\0') {
        if (src[i] == '\n') {
            n++;
        }
        i++;
    }
    if (n <= 1) return 84;
}

int error(char *str, int l, int c)
{
    char *src; int i = 0, t = 0, z = 0, n = 0;
    src = malloc(sizeof(char) * 1000);
    while (str[i] != '\n') {
        src[i] = str[i]; i++;
    }
    src[i] = '\0'; i++;
    if (my_str_isnum(src) == 0) return 84;
    while (str[i] != '\0') {
        if (str[i] != 'o' && str[i] != '.' &&
            str[i] != '\n') {
            return 84;
        }
        if (str [i] == '\n') n++;
        if (str[i] == '\n' && z != c) return 84;
        z++;
        if (str[i] == '\n' && z == (c + 1)) z = 0;
        i++;
    }
    if (n < 1 || n != l) return 84;
    return 0;
}
