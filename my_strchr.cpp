#include <string.h>
#include "my_strings.h"

char *my_strchr (const char *str, int ch)
{
    for (; *str != ch; str++);
    //while(*(str + index) != (char)ch)
    //    index++;

    return (char*)str;
}
