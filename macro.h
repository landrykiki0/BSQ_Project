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
int domino(int a, int b, copy *copy);
star *starter(char *str);
#endif
