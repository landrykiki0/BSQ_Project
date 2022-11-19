/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/
#include "macro.h"
#include "macroo.h"
int main(int ac, char **av)
{

    int i = 0;
    star *element = starter(av[1]);
    printf("%d", element->l);
    star *gege = element;
    int l = element->l;
    copy *copy = bsq(gege);
    char **ag = element->av;
    char **ad; ad = malloc(sizeof(char*) * 2000);
    while (i < element->l) {
        ad[i] = malloc(sizeof(char) * element->c + 2); i++;
    }
    i = 0;
    while (ag[i] != NULL) {
        int j = 0;
        while (j < element->c) {
            if (domino(i, j, copy) == 1) {
                ad[i][j] = 'x';
            } else {
                ad[i][j] = ag[i][j];
            }
            j++;
        }
        ad[i][j] = '\n';
        j++; ad[i][j] = '\0';
        i++;
    }
    i = 0;
    while (ad[i] != NULL) {
        printf("%s", ad[i]); i++;
    }
}
