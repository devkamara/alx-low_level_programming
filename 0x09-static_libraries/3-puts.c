#include <stdio.h>
#include "main.h"

/**
 * _puts - the function prints a string, followed by a newline to stdout
 * @s: the string of characters to be printed
 * Return: returns nothing
 */

void _puts(char *s)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (*(s + i) == 0)
		{
			printf("\n");
			break;
		}
		printf("%c", *(s + i));
	}
}
