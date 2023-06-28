#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int l;
	int i;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	_putchar(l + '0');
	if (l % 2 == 0)
	{
		i = l / 2;
	}
	else
	{
		i = (l - 1) / 2;
	}
	while (i <= l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
