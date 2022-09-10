#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase, followed by a new line
 * Return: 0 if true (success)
 */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
