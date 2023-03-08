#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns if the input integer is a prime number
 * @n: evaluation number
 * Return: 1 for prime number or 0 for anything else
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: evaluation number
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int a)
{
if (a == 1)
return (1);
if (n % a == 0 && a > 0)
return (0);
return (actual_prime(n, a - 1));
}
