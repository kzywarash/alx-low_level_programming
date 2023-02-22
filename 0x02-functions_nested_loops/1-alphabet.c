#include "main.h"
/**
 * main - a function that prints the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
