#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination character
 * @src: source char
 * @n: number of bytes from src used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
