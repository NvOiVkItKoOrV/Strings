#include <stdio.h>
#include <string.h>
#include "my_strings.h"

char* my_strncat(char* str1, const char* str2, size_t count);
int main()
{
    const char buf2[] = "aaaaa";
    char buf1[50] = "bbbbbsdjkhglkjh";
    char *size = my_strncat(buf1, buf2, 2);
    printf("%s\n", size);
    return 0;
}
