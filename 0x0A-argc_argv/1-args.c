#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 if true
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
