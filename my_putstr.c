#include <unistd.h>
int my_strlen(char const *str);
void my_putstr(char *s)
{
    write(1 , s, my_strlen(s));
}
