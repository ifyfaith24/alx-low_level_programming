#include "main.h"

/**
 * _isdigit - check if a letter is a digit
 * @a: the number to b checked
 * Return: 1 for a digit or 0 for anything else
 */

int _isdigit(int a)
{
if (a >= 48 && a <= 57)
{
return (1);
}
return (0);
}
