#include <unistd.h>

void _putchar(char c)
{
    write(1, &c, 1);
}

void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
    {
       _putchar(c);
       c = c + 1;
    }
}

int main(void)
{

    print_alphabet();
    _putchar("\n");

    return (0);
}
