#include <string.h>
#include "my_strings.h"

char* my_strncpy (char* str1, const char* str2, size_t count)
{
    int s1 = my_strlen((const char*)str1);
    int s2 = my_strlen(str2);

    if (s1 < count || s2 < count)
        return nullptr;

    for (int i = 0; i < count; i++)
        str1[i] = str2[i];

    return str1;
}


