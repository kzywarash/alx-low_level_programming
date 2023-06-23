#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int c1;
	int c2;

	c1 = 0;
	if (n > 0)
	{
		while (c1 < n)
		{
			c2 = c1;
			while (c2 > 0)
			{
				_putchar(' ');
				c2--;
			}
			_putchar(92);
			_putchar('\n');
			c1++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
