#ifndef MY_STRINGS_H
#define MY_STRINGS_H

void   my_puts    (const char *buf);
char  *my_strchr  (const char *str, int ch);
size_t my_strlen  (const char *str);
char  *my_strcpy  (char* str1, const char* str2);
char  *my_strncpy (char* str1, const char* str2, size_t count);
char  *my_strcat  (char *str1, const char *str2);
char  *my_strncat (char* str1, const char* str2, size_t count);
char  *my_fgets   (char *str, int count, FILE *fp);
char  *my_strdup  (const char *str);
size_t my_getline (char **buf, size_t *buf_size, FILE *fp);

#endif /*MY_STRINGS_H*/
