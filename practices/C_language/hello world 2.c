#include <stdio.h>

int strl(char* s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return(i);
}
int main(void)
{
    char *str;
    int len;

    str = "The lord is good";
    len = strl(str);

    printf("%d\n", len);

    return(0);
}
