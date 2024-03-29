#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 * @s: characters of string
 * Return: nothing
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
