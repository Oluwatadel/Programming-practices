#include <stdio.h>

int main(void)
{
    int x = 5;
    int *p;
    p = &x; /* p of type integer is used to save address of x and can *p can be used to derefence x*/
    int **q;/* '**q' here is a pointer to pointer so as to save the address of pointer p*/
    q = &p;
    int ***r; /* note you can also declare the pointer as (int*** var_name) */
    r = &q;

    printf("the address of x is %d and value of x is %d", &x, x);
    printf("\n==============================================================================\n");
    printf("the address of p is %d, value of p is %d and the value of *p is %d", &p, p, *p);
    printf("\n==============================================================================\n");
    printf("the address of q is %d, value of q is %d and the value of **q is %d", &q, q, **q);
    printf("\n==============================================================================\n");
    printf("the address of r is %d, value of r is %d and the value of ***r is %d\n", &r, r, ***r);

    ***r = 2022;
    printf("the value of x = %d\n, *p = %d\n, *(*q) = %d\n, *(*(*r))) = %d\n", x, *p, *(*q), *(*(*r)));
    printf("\n==============================================================================\n");
    printf("the address of x = %d\n, *p = %d\n, *(*q) = %d\n, *(**r) = %d\n", x, p, q, r);
    return(0);
}
