#include <stdio.h>
#include "my_strings.h"

void my_puts (const char *buf)
{
    while (*buf != '\0')
    {
        putchar(*buf);
        buf++;
    }
    putchar('\n');
}
