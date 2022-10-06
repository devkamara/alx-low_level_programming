#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: memory bytes to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *a;
	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
