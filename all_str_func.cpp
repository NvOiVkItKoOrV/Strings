#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_strings.h"

#define ZERO_SIZE 0
#define NEW_SIZE 64

size_t my_getline (char **buf, size_t *buf_size, FILE *fp)
{
    size_t index = 0;

    if (*buf_size == ZERO_SIZE)
        *buf_size = NEW_SIZE;

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

char *my_fgets (char *str, int count, FILE *fp)
{
    for (int index = 0;index < count - 1; index++)
    {
        *(str + index) = fgetc(fp);

        if (*(str + index) == '\n' || *(str + index) == EOF)
            break;

    }
    str[count] = '\0';

    return str;
}

void my_puts (const char *buf)
{
    while (*buf != '\0')
        putchar(*(buf++));

    putchar('\n');
}
char *my_strcat (char *str1, const char *str2)
{
    char *str = str1;
    while (*str1 != '\0')
        str1++;

    while (*str2 != '\0')
        *(str1++) = *(str2++);

    *str1 = *str2;

    return str;
}

char *my_strchr (const char *str, int ch)
{
    while (*str != ch)
        str++;

    return (char*)str;
}

char* my_strcpy (char* str1, const char* str2)
{
    char *str = str1;

    while (*str2 != '\0')
        *(str1++) = *(str2++);

    *str1 = '\0';

    return str;
}

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

size_t my_strlen (const char *str)
{
    size_t n_count = 0;

    while (*(str++) != '\0')
        n_count++;

    return n_count;
}

char *my_strncat (char* str1, const char* str2, size_t count)
{

    char *str = str1;

    while (*str1 != '\0')
        str1++;

    for (int i = 0; i < count;i++)
        *(str1++) = *(str2++);

    *str1 = '\0';
    return str;
}

char* my_strncpy (char* str1, const char* str2, size_t count)
{
    for (int i = 0; i < count; i++)
        str1[i] = str2[i];

    return str1;
}
