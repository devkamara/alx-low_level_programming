#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: where to copy to
 * @src: where to copy from
 * @n: integer no of bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
