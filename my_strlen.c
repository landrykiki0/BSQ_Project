/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** my_strlen.c
*/
#include <stdio.h>
#include <unistd.h>

int my_putchar(char c);
int my_strlen(char const *str)
{
    int i = 0;
    int t = 0;
    while (str[i] != '\0') {
        i++;
        t++;
    }
    return t;
}
