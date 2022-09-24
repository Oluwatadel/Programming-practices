#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5] = {1, 10, 100, 1000, 10000};

   printf("First array is: %p\n", &(a[0]));
}
