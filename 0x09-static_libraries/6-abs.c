#include "main.h"
/**
 * _abs - return abs value
 * @n: The number to check
 * Return: Absolute value of number or zero
*/
int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
