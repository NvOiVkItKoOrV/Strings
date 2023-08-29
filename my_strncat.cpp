#include <string.h>
#include "my_strings.h"

char *my_strncat (char* str1, const char* str2, size_t count)
{

    char *str = str1;

    for (; *str1 != '\0'; str1++);

    for (int i = 0; i < count;i++)
        *(str1++) = *(str2++);

    *str1 = '\0';
    return str;
}
