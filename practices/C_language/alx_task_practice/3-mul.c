#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);

		printf("%d\n", n * m);
		return (0);
	}
	else
	{
		printf("===================|| error ||======================\n");
		return (1);
	}
}
