#include "main.h"
/**
 *_islower - checks for lowercase
 *@c: character to be checked
 *Return: 1 if c is lowercase, 0 if true
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
