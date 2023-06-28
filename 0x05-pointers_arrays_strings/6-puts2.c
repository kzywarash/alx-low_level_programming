#include "main.h"

/**
 * puts2 - function that prints every other character of a
 * string, starting with the first character, followed by a new line
 * @str: haracters of string
 * Return: nothing
 */

void puts2(char *str)
{
	int len;
	int n;

	len = 0;
	n = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (n <= len)
	{
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar('\n');
}
