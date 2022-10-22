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
int c;
c = 0;
while (c < 10)
{
	putchar(c % 10 + '0');
	if (c >= 0 && c < 9)
	{
	putchar(',');
	putchar(' ');
	}
	c = c + 1;
}
putchar('\n');
return (0);
}
