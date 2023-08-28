#include <string.h>
#include "my_strings.h"

char* my_strcpy (char* str1, const char* str2)
{
    int s1 = my_strlen((const char*)str1);
    int s2 = my_strlen(str2);

    if(s1 < s2)
        return nullptr;

    int index = 0;

    while (*(str2 + index) != '\0')
    {
        str1[index] = str2[index];
        index++;
    }
    str1[index] = '\0';

    return str1;
}
