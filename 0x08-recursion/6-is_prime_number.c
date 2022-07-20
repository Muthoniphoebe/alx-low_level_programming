#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: number to evaluate
 * @m: itertor
 *
 * Return: 1 if prime number, 0 if not
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if the number is prime.
 * @n: number to checked.
 *
 * Return: if int is not prime 0.
 *         if number is prime 1.
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
