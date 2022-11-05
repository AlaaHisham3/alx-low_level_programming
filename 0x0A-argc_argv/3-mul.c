#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: counter
 * @argv: array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 1;
	(void)argc;
	if (argc > 1 && argc < 4)
	{
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	}
		return (0);
}
