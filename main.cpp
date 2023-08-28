#include <stdio.h>
#include <string.h>
#include "my_strings.h"

int main()
{
    const char buf2[] = "aaaa";
    char buf1[] = "bbbbb";
    char *size = my_strcpy(buf1, buf2);
    printf("%s\n", size);
    return 0;
}
