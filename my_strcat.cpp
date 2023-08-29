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

    return str;
}
