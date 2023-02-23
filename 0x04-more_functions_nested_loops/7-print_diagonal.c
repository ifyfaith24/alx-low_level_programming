#include "main.h"
/**
 * print_line - Draws a diagonal line.
 * @n: the number of times to print diagonal lines
 * Return: nothing
 */
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
