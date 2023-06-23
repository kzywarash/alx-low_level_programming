#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: nothing
 */

void print_square(int size)
{
	int c1;
	int c2;

	c1 = size;
	if (size > 0)
	{
		while (size > 0)
		{
			c2 = 0;
			while (c2 < c1)
			{
				_putchar('#');
				c2++;
			}
			_putchar('\n');
			size--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
