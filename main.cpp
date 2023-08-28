#include <stdio.h>
#include <string.h>
#include "my_strings.h"
int main()
{
    const char buf2[] = "aaaaa";
    char buf1[50] = "bbbbbsdjkhglkjh";
    char *size = my_strcat(buf1, buf2);
    printf("%s\n", size);
    return 0;
}

