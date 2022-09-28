#include <stdio.h>

int strl(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        return(i);
    }
}

int main(void)
{
    char *array_ch = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

    int length = strl(array_ch);

    printf("%d\n", length);
    return(0);
}

