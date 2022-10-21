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
int c, x;
c = 0;
x = 'a';
while (c < 10)
{
	putchar(c % 10 + '0');
	c = c + 1;
}
while (x <= 'f')
{
	putchar(x);
	x++;
}
putchar('\n');
return (0);
}
