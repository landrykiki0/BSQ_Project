#include <stdio.h>
#include <unistd.h>

int my_compute_power_it(int nb, int p);

int count(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] == '-') || (str[i] == '+')) {
            i++;
        } else {
        return i;
        }
    }
}

int count2(int t, char const *str)
{
    int i = 0;
    while (str[t] != '\0') {
        if (('0' <= str[t]) && (str[t] <= '9')) {
            i++;
            t++;
        } if (('0' > str[t]) || (str[t] > '9')) {
            return i;
        }
    }
}

int taken(int t, int i, int n, char const *str)
{
    int r = t + i;
    int m = 0;
    while (t < r) {
        m = m + ((str[t] - '0') * my_compute_power_it(10, (i - 1)));
        i--;
        t++;
    }
    return m;
}

int my_getnbr(char const *str)
{
    int n = 1;
    int p = 0;
    int t = count(str);
    int i = count2(t, str);
    int q = t;
    while (str[p] != str[t]) {
        if (str[p] == '-') {
            n = -n;
            p++;
        }
        if (str[p] == '+') {
            n = n;
            p++;
        }
    }
    int z = n * taken(t, i, n, str);
    return z;
}
