#include <stdio.h>
void *_memset (char* s, char b, unsigned int i)
{
    unsigned int n;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
        printf("%c", b);
}

int main(void)
{
    unsigned int i;
    char buffer[98] = {0x00};

     _memset(buffer, 0x01, 95);
     return (0);
}

