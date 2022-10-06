#include "main.h"
/**
 * _isdigit - checks if it is digit
 * @c: char to be checked
 * Return: one if c is digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
