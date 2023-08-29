#include <string.h>
#include "my_strings.h"

char *my_strcat (char *str1, const char *str2)
{
    char *str = str1;
    for (; *str1 != '\0'; str1++);

    for (; *str2 != '\0'; str2++)
    {
        *str1++ = *str2;
    }
    *str1 = *str2;
    //int index_s1 = 0;
    //while (*(str1 + index_s1) != '\0')
    //    index_s1++;

    //int index_s2 = 0;
    //while(*(str2 + index_s2) != '\0')
    //{
    //    str1[index_s1 + index_s2] = str2[index_s2];
    //    index_s2++;
    //}
    //str1[index_s1 + index_s2] = '\0';

    return str;
}
