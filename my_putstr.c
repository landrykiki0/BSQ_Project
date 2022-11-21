/*
** EPITECH PROJECT, 2022
** my_putstr.cc
** File description:
** my_putstr.c
*/
#include <unistd.h>
int my_strlen(char const *str);
void my_putstr(char *s)
{
    write(1 , s, my_strlen(s));
}
