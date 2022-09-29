#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number to be checked
 * Return: 0 if true
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
