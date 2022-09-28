#include "main.h"

/**
 * _memset - a function that fills memory with constant byte
 * @s: string to be checked
 * @b: constant bytes
 * @n: number of bytes of memory
 * Return: Returns a pointer to teh memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; i++, n--)
{
	s[i] = b;
}
return (s);
}

