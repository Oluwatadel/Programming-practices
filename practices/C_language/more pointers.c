#include <stdio.h>
#include "main.h"

int main(void)
{
    int a = 1025;
    int *p;
    p = &a;

    printf("The size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", &a, a);
    printf("Address = %d, value = %d\n", p, *(p + 1));
    printf("===============================================\n");
    /*Note *P here is a character variable */
    char *p0;
    p0 = (char*)p; /* This made it possible to give a to receive character instead of an integer */

    printf("The size of character is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("Address = %d, value = %d\n", &a, a);
    printf("Address = %d, value = %d\n", p, *(p + 1));
     printf("===============================================\n");

    char array_b;
    array_b = 'H';
    *p0 = array_b;
    printf("The value of a is: %c\n", a);
    printf("The value of p is: %d\n", p);
    printf("The value of *p is: %c\n", *p);
    printf("The value of p0 is: %d\n", p0);
    printf("===============================================\n");
    printf("The size of a is %d\n", sizeof(a));
    printf("The size of *p is %d\n", sizeof(*p));
    printf("The value of *(p+1) is %d\n", *(p + 1));
    printf("===============================================\n");

    void *p1;
    p1 = p;
    printf ("The address of p1 = %d and the value of p1 = %c\n", p1, p1); /* Note only the address of void pointers can be used*/
                                                                          /* Value of *p1 here is null*/

    return (0);
}
