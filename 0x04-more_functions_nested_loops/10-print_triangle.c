#include "main.h"
/**
*print_triangle - prints a triangle
*@size: is the size of the triangle
*/
void print_triangle(int size)
{
int x, y;
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
if (y < size - x - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
if ((x + 1) == size)
{
break;
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
