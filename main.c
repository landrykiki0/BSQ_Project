/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/
#include "macro.h"
#include "macroo.h"
void my_putstr(char *s);

int copier(int i, int j, char **ad, copy *copy)
{
    if (domino(i, j, copy) == 1) {
        ad[i][j] = 'x';
        return 1;
    }
    return 0;
}

int copier2(int h, char *d, char *g)
{
    if (h == 0) {
        *d = *g;
    }
}

int printer(char **ad, int w)
{
    while (ad[w] != NULL) {
        my_putstr(ad[w]); w++;
    }
}

int main(int ac, char **av)
{
    star *element;
    if (ac == 3 && my_str_isnum(av[1]) == 1 && checker2(av[2]) == 1) {
    element = starter2(my_getnbr(av[1]), av[2]);
    } else if (ac == 2 && error2(av[1]) != 84) element = starter(av[1]);
    else { return 84; }
    if (element->l == -84) return 84; star *gege = element; int i = 0, u = 0;
    int l = element->l, t = l + 1, p = element->c + 1; copy *copy = bsq(gege);
    char **ag = element->av, **ad; ad = malloc(sizeof(char*) * t); int w = 0;
    while (u < element->l) {
        ad[u] = malloc(sizeof(char) * p); u++;
    }
    while (ag[i] != NULL) {
        int j = 0;
        while (j < element->c) {
            int h = copier(i, j, ad, copy); copier2(h, &ad[i][j], &ag[i][j]);
            j++;
        }
        ad[i][j] = '\n'; j++; ad[i][j] = '\0'; i++;
    }
    printer(ad, w);
}
