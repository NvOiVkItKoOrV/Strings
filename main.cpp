#include <stdio.h>
#include <string.h>
#include "my_strings.h"

char *my_strchr (const char *str, int ch);

int main()
{
    char buf[] = "asdfghjkl";
    int chr = 'f';
    char *newy = nullptr;
    newy = my_strchr(buf, chr);
    printf("%s\n", newy);
    return 0;
}
