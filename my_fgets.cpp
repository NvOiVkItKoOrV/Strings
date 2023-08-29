#include <stdio.h>
#include "my_strings.h"

char *my_fgets (char *str, int count, FILE *fp)
{
    int index = 0;

    for (int index = 0;index < count - 1; index++)
    {
        *(str + index) = fgetc(fp);

        if(*(str + index) == '\n' || *(str + index) == EOF)
            break;

    }
    str[count] = '\0';

    return str;
}
