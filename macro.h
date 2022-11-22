/*
** EPITECH PROJECT, 2022
** macro.h
** File description:
** macro.h
*/
#ifndef MACRO_H
    #define MACRO_H
    #include "macroo.h"
    #include <stdio.h>
struct star {
    char **av;
    int l;
    int c;
};
typedef struct star star;
copy *bsq(star *element);
int my_getnbr(char const *str);
int error2(char *str);
star *starter2(int n, char *str);
int checker2(char *str);
int domino(int a, int b, copy *copy);
int my_strlen(char const *str);
int error(char *str, int l, int c);
int my_str_isnum(char const *str);
star *starter(char *str);
#endif
