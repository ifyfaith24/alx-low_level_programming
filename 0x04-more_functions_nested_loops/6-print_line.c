#include "main.h"
/**
 * print_line - Write a function that draws a straight line.
 * @n: the number of times the character to draw
 * Return: nothing
 */
void print_line(int n)
{
int a;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
_putchar(95);
}
_putchar('\n');
}
}
