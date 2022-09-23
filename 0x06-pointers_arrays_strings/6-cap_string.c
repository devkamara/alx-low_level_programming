#include "main.h"
#include <stdio.h>

/**
**cap_string - capitalizes all words in a string
*@s: string to be used
*Return: returns s
*/

char *cap_string(char *s)
{
	int i;
	
	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			if (s[i] == ' ' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			if (s[i] == '\t')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
