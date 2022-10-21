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
c = 'a';
while (c <= 'z')
{
	putchar(c);
	c = c + 1;
}

putchar('\n');
return (0);
}
