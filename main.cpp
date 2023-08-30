#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_strings.h"

int main ()
{
    size_t bufsize    = 10;
    size_t characters = 0;

    FILE *fp = fopen("HELLO.txt", "r");

    char *buffer = nullptr;

    characters = my_getline(&buffer, &bufsize, fp);

    printf("%s\n", buffer);
    printf("%ld", characters);

    free(buffer);
    return 0;
}
