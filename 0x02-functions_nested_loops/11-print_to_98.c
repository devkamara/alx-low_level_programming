#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print all the numbers between 0 -98
 *@n: parameter to be used
 */
void print_to_98(int n)
{
int i = 0;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
else
{
for (i = n; i <= 98; i++)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
putchar('\n');
}
