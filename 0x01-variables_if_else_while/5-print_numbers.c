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
char c;
c = 0;
while (c < 10)
{
	printf("%d", c);
	c = c + 1;
}
putchar('\n');
return (0);
}
