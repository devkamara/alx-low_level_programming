#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - func that prints a name
 * @name: name of the person
 * @f: pointer to function f
 * Return: Void or NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
