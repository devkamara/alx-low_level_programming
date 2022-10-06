#include "main.h"
/**
 * *_strchr - 
 * @s: string 
 * @c: 
 * Return: 0 if true
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
