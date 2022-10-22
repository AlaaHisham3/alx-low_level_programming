#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes here */
/**
* main - print_alphabet
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, j, l, n;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 9; j++)
	{
		for (l = i; l < 10; l++)
		{
			for (n = j + 1; n < 10; n++)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(' ');
				putchar(l % 10 + '0');
				putchar(n % 10 + '0');
				if ((i != 9 || j != 8) || (l != 9 || n != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
