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
int i, j, l;
for (i = 0; i < 8; i++)
{
	for (j = i + 1; j < 9; j++)
	{
		for (l = j + 1; l < 10; l++)
		{
		putchar(i % 10 + '0');
		putchar(j % 10 + '0');
		putchar(l % 10 + '0');

		if (i != 7 || j != 8 || l != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
}
putchar('\n');
return (0);
}
