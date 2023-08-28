#include <stdio.h>
#include <string.h>
#include "my_strings.h"

int main()
{
    const char buf2[] = "aaaaa";
    char buf1[] = "bbbbb";
    char *size = my_strncpy(buf1, buf2, 2);
    printf("%s\n", size);
    return 0;
}

