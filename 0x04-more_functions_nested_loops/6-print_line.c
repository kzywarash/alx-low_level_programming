#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of lines to print
 * Return: nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
