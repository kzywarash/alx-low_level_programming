#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: characters of string
 * Return: nothing
 */

void _puts(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
