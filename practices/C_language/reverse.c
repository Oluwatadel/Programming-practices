#include <unistd.h>
#include <stdio.h>

int _putchar(char s)
{
	return (write(1, &s, 1));
}

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
