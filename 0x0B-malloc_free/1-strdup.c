#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: string to be checked
 * Return: NULL IF srt = NULL, pointer if success, NULL
 * if insufficient memory
 */

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;
	if (str == NULL)
		RETURN (NULL);
	for (i = 0; str[i]; i++)
		len++;
		s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
		s[len] = '\0';
	return (s);
}
