#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase and then in uppercase
 * return: 0 if true (success)
 */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar (ch);
putchar ('\n');
return (0);
}
