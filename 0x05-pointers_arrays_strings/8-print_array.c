#include "main.h"
#include <stdio.h>
/**
*print_array - prints n elements of an array of integers
*followed by newline
*@a: pointer to an integer
*@n: number of element in array to be checked
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
