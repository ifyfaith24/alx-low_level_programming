#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers from input to 98
 * @n: The starting number
 * Return: 0
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
printf(",");
n--;
}
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
printf(",");
n++;
}
}
putchar('\n');
}
