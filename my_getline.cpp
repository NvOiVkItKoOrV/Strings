#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_strings.h"

size_t my_getline (char **buf, size_t *buf_size, FILE *fp)
{
    size_t index = 0;

    if (*buf_size == 0)
        *buf_size = 64;

    if (*buf == nullptr)
        *buf = (char *)malloc(*buf_size * sizeof(char));

    while (*(*buf + index) != '\n' && *(*buf + index) != EOF)
    {

        if (index == *buf_size)
        {

            *buf = (char*)realloc(*buf, *buf_size * 2);
        }
            *(*buf + index) = fgetc(fp);

        index++;
    }

        *(*buf + index) = '\0';

    return index;
}
