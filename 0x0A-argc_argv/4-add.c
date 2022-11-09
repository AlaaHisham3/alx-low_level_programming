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

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Erorr\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
