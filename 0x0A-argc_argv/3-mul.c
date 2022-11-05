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
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
	}
		return (0);
}
