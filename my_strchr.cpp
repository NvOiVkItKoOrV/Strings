#include <string.h>
#include "my_strings.h"

char *my_strchr (const char *str, int ch)
{
    int index = 0;

    while(*(str + index) != (char)ch)
        index++;

    char* found  = (char*)(str + index);
    return found;
}
