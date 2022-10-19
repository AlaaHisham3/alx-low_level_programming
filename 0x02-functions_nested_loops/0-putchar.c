#include "main.h"

/**
 * main - print a text using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
char str_hbt[8] = "_putchar";
while (n < 8)
{
	_putchar(str_hbt[n]);
	n += 1;
}
_putchar('\n');
return (0);
}
