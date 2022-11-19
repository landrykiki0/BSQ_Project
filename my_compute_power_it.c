/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** my_compute_power_it.c
*/

#include <stdio.h>
#include <unistd.h>
int my_putchar(char c)
{
    write (1, &c, 1);
}

int my_compute_power_it(int nb, int p)
{
    int paw = 1;
    int i = 0;
    if (p < 0) {
        return 0;
    } else {
        while (i != p) {
            paw = paw * nb;
            i++;
        }
        return paw;
    }
}
