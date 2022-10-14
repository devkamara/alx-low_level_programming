#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *sum_them_all - returns the sum of all its param
 *@n: integer number
 *Return: the sum of params, n ==0 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, nSum;

	if  (n == 0)
	return (0);
	
	va_start(ap, n);

	nSum = 0;
	for (i = 0; i < n; i++)
	nSum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
