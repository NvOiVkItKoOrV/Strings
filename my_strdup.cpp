#include <stdlib.h>
#include "my_strings.h"

char *my_strdup (const char *str)
{
    size_t index = 0;

    while (*(str + index) != '\0')
        index++;

    char *copy_str = (char *)malloc(index + 1);

    for (int i = 0;i < index + 1; i++)
        copy_str[i] = str[i];

    copy_str[index + 1] = '\0';

    return copy_str;
}
