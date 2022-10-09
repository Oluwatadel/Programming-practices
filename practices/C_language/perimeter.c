#include <stdio.h>
/**
 * perimeter- function to calculate the perimeter of a rectangle
 * @a: The lenght of the rectangle
 * @b: the breath of the rectangle
 * Return: Success return 0 and the perimeter of the rectangle
 */

float perimeter(float a, float b)
{
	float perimeter;
	float sum;

	if (a < 0 || b < 0)
		return (-1);
	if (a > 0 && b > 0)
	{
		sum = a + b;
		return (perimeter = sum * 2);
	}
	return (0);
}

/**
 * main - to calculate the perimeter of a rectangle
 *
 * Return: Always 0
 */
int main(void)
{
	float l, b;
	int r;

	printf("=======================================\n");
	printf("=                                     =\n");
	printf("=                                     =\n");
	printf("=                                     =\n");
	printf("= To calculate perimeter enter value  =\n");
	printf("=     for lenght and breath (l, b)    =\n");
	printf("=                                     =\n");
	printf("=                                     =\n");
	printf("=                                     =\n");
	printf("=======================================\n");
	scanf("%f %f", &l, &b);

	r = perimeter(l, b);
	printf("the perimeter of your rectangle = %i\n", r);
	return (0);
}
