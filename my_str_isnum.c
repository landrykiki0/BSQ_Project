/*
** EPITECH PROJECT, 2022
** my_str_isnum.C
** File description:
** my_str_isnum.c
*/

#include <stdio.h>
int my_str_isnum(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (48 > str[i] || 57 < str[i]) {
                return 0;
            }
            i++;
    }
    return 1;
}
