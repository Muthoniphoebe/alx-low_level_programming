#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *@a: pointer to an int, first to be swapped.
 *@b: pointer to an int, second to be swapped.
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = *a;
}
