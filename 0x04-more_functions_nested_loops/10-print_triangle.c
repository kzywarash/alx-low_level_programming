#include "main.h"

/**
 * print_triangle - Prints a triangle,with character #.
 * @size:  size of the triangle.
 */

void print_triangle(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = size - height; width > 0; width--)
			{
				_putchar(' ');
			}
			for (width = 0; width < height; width++)
			{
				_putchar('#');
			}
			_putchar('\n');

			if (height == size)
			{
				continue;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
