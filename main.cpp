#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_strings.h"

int main()
{
    char str[] = "19274078";
    char *ptr = my_strdup(str);
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}

