#include <string.h>
#include "my_strings.h"

char* my_strcpy (char* str1, const char* str2)
{
    char *str = str1;

    if (my_strlen((const char*)str1) < my_strlen(str2))
    {
        return nullptr;
    }

    for (; *str2 != '\0';)
        *(str1++) = *(str2++);

    *str1 = '\0';

    return str;
}
