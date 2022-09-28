#include <stdio.h>

int strl(char *str)
{
    int i;
    for (i = 0; str[i] != '\0' && i < 7; i++)
        i++;
}



int main(void)
{
    char *s;
    int i;

    s = "The lord is my strength";
   strl(s);

    printf("the strength of the str is: %d\n", strl(s));

}
