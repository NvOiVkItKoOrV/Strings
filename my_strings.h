#ifndef MY_STRINGS_H
#define MY_STRINGS_H

void   my_puts    (const char *buf);
char  *my_strchr  (const char *str, int ch);
size_t my_strlen  (const char *str);
char*  my_strcpy  (char* str1, const char* str2);
char*  my_strncpy (char* str1, const char* str2, size_t count);

#endif /*MY_STRINGS_H*/
