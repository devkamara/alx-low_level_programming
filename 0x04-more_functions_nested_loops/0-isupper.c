#include "main.h"

/**
 *_isupper - checks for an uppercase character
 *@c: character to be checked
 *Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
{
return (1);
}
return (0);
}
