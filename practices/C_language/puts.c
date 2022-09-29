#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _strlen_recursion(char *s)
{
	if (*s)
	{
		int i;

		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (0);
}

int main(void)
{
	int n;
	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}
