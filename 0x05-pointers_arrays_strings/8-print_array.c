#include "main.h"

/**
 * print_array - function that prints n elements
 * of an array of integers, followed by a new line
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c <= n - 1)
	{
		if (c != (n - 1))
		{
			_putchar(*(a + c));
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(*(a + c));
		}
		c++;
	}
}
