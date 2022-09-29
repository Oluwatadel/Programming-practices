#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;

    i = 0;

    while (dest[i] != '\0')
        i++;

    j < n;

    while (src[j] != '\0')
    {
        dest[i] = src[j];

        j++;
        i++;
    }

    dest[i] = '\0';

    return (dest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
