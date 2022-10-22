#include "main.h"

/**
 *_isalpha - a function that prints the alphabet, in lowercase
 * @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

