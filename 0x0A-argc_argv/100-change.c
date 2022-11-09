#include <stdlib.h>
#include <stdio.h>
int change(int cent);
/**
 * main - check the code
 * @argc: counter
 * @argv: array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Erorr\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", change(atoi(argv[1])));
		return  (0);
	}
}

/**
 * change - check the code
 * @cent: veriable
 * Return: Always 0.
 */

int change(int cent)
{
	int coins;

	coins = 0;
	while (cent > 0)
	{
		while (cent >= 25)
		{
			cent = cent - 25;
			coins++;
		}
		while (cent >= 10)
		{
			cent = cent - 10;
			coins++;
		}
		while (cent >= 5)
		{
			cent = cent - 5;
			coins++;
		}
		while (cent >= 2)
		{
			cent = cent - 2;
			coins++;
		}
		while (cent >= 1)
		{
			cent = cent - 1;
			coins++;
		}
	}
	return (coins);
}
