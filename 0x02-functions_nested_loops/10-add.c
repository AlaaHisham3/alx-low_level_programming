#include "main.h"

/**
 * add - a function that prints the alphabet, in lowercaset
 * @x: variable
 * @y: variable
 * Return: Always 0.
 */
int add(int x, int y)
{
	int sum;

	if (x > 0 && y > 0)
	{
		sum = x + y;
		return (sum);
	}
	else
	{
		return (0);
	}
}
