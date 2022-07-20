#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to return the square root of.
 *
 * Return: if n has a natural square root - the natural square root of n.
 *         if n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @i: The root to be tested.
 *
 * Return: if the number has a natural square root - the square root.
 *        if the number does not have a natural square root - -1.
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
