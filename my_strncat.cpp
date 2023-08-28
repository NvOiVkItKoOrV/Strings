#include <string.h>
#include "my_strings.h"

char *my_strncat(char* str1, const char* str2, size_t count)
{
    int index_s1 = 0;
    while (*(str1 + index_s1) != '\0')
        index_s1++;

    int index_s2 = 0;
    for(int index_s2 = 0; index_s2 < count; index_s2++)
        str1[index_s1 + index_s2] = str2[index_s2];

    str1[index_s1 + count] = '\0';
    return str1;
}
