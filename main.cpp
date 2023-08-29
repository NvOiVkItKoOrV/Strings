#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_strings.h"

//size_t my_getline(char **buf, size_t buf_size, FILE *fp);

int main()
{
    char buf2[] = "World!";
    printf("%d",my_strlen(buf2));

    /*char buf1[50] = "Hello, ";
    char buf2[] = "World!";
    char *str = my_strcat(buf1, buf2);

    printf("%s", str);*/



    /*char *buffer = NULL;
    size_t bufsize = 10;
    size_t characters = 0;
    FILE *fp = fopen("HELLO.txt", "r");

    buffer = (char *) calloc (bufsize, sizeof(char));
    printf("%d\n", sizeof(buffer));
    characters = my_getline(&buffer, bufsize, fp);
    printf("%s\n", buffer);
    //printf("%ld", characters);
    free(buffer);*/
return 0;
}

/*size_t my_getline(char **buf, size_t buf_size, FILE *fp)
{
    size_t index = 0;
    if(buf_size == 0)
        return -1;

    *buf = (char *) calloc (buf_size, sizeof(char));
                                                            printf("%d   %d\n", buf_size, sizeof(buf));
    while(index < buf_size && (*(*buf + index) != '\n'))
    {
        if(fscanf(fp,"%hhd", (*buf + index)))
            return -1;

        index++;
    }
    *(*buf + index) = '\0';
    return index;
}
*/
