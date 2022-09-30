#include "main.h"
#include <stdio.h>
/**
 * _argc - a program that prints its name
 *@argc: argument to be checked
 * Return: 0 if success
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
