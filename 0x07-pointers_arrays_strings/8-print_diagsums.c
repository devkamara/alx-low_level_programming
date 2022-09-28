#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: 2D array of int types
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
sum1 = 0;
for (i = 0; i < size; i++)
	sum1 += *(a + ((size * i) + i));
sum2 = 0;
for (i = 1; i <= size; i++)
	sum2 += *(a + ((size * i) - i));
printf("%d, %d\n", sum1, sum2);
}
