#include <stdio.h>

int factorial(int n)
{
    int res = 1, i = 1;

    while (i <= n )
    {
        res = res * i;
        i++;
    }
    return (res);
}
int main(void)
{
    int f = factorial(5);

    printf("5! = %d\n", f);

    return (0);
}
