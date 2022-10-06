#include "main.h"
/**
 * _isupper - checks to see uppercase
 * @c: character to be checked
 * Return: 1 if c is uppercase, zero if true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
