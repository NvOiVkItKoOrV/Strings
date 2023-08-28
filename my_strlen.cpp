#include <string.h>
#include "my_strings.h"

size_t my_strlen(const char *str)
{
    size_t n_count = 0;

    while (*(str + n_count) != '\0')
        n_count++;

    return n_count;
}
