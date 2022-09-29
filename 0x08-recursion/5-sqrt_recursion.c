#include "main.h"
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the integer
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - finds the square root
 * @n: integer to find the square root
 * @val: the square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
