#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This function prints a name using function pointers.
 * @name: String to be printed out
 * @f: Function poniter
 * Return: Null
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr = f;
	ptr(name);
}
