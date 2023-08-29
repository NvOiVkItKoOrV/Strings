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

    while (index < *buf_size && *(*buf + index) != '\n')
    {
        *(*buf + index) = fgetc(fp);

        if (*(*buf + index) == EOF || *(*buf + index) == '\n')
        {
            break;
            return index;
        }
        index++;
    }

    /*if (index >= *buf_size && *(*buf + index) != '\n' && *(*buf + index) != EOF)
    {

        *buf = (char*)realloc(*buf, *buf_size * 8);
        *buf = *buf + *buf_size;
        *buf_size *= 2;
        my_getline(buf, buf_size, fp);

    }
    else
    {
        *(*buf + index) = '\0';
    }*/
    size_t all_str_count = 0;

    while (*(*buf + all_str_count) == EOF || *(*buf + all_str_count) == '\n')
        all_str_count++;

    return (size_t)all_str_count;
}
