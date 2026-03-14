#include "macro.h"
#include "macroo.h"
#include <stdlib.h>

int counter(int *a, char c)
{
    if (c == '.') {
        (*a) = (*a) + 1;
    }
}

int checker(star *starp, star *element, copy *copy, int n)
{
    int i = starp->l, j = starp->c; char **av = starp->av;
    int a = 0; int l = i + n, m = j + n;
    int k = i, u = j;
    while (i < l && l <= element->l) {
        while (j < m && m <= element->c) {
            counter(&a, av[i][j]);
            j++;
        }
        j = starp->c; i++;
    }
    if (a == n * n) {
        if (n > copy->n) {
            copy->i = k; copy->j = u; copy->n = n;
        }
        checker(starp, element, copy, n + 1);
    } else {
        return 0;
    }
}

copy *bsq(star *element)
{
    int b = 0;
    star *starp;
    starp = malloc(sizeof(*starp));
    copy *copy;
    copy = malloc(sizeof(*copy));
    copy->i = 0; copy->j = 0; copy->n = 0;
    int i = element->l, j = element->c;
    while (b < i) {
        int d = 0;
        while (d < j) {
            starp->av = element->av;
            starp->l = b;
            starp->c = d;
            checker(starp, element, copy, 1);
            d++;
        }
        b++;
    }
    return copy;
}

int domino(int a, int b, copy *copy)
{
    int i = copy->i; int j = copy->j;
    int n = copy->n;
    if (i <= a && a < i + n && j <= b && b < j + n) {
        return 1;
    }
    return 0;
}
