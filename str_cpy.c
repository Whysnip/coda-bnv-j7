#include <stdlib.h>
#include "str_cpy.h"

int str_len(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

char *str_cpy(char * str)
{
    int len = str_len(str);
    char *cpy = malloc(len + 1);
    int i = 0;

    if (cpy == NULL)
        return NULL;

    while (str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return cpy;
}