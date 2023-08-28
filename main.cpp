#include <stdio.h>
#include <string.h>
#include "my_strings.h"

int main()
{
    char buf[50] = {};
    FILE *fp = fopen("HELLO.txt", "r");
    my_fgets(buf, 15, fp);
    printf("%s", buf);

    return 0;
}
