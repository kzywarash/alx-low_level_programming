#include <stdio.h>
/**
 * main - prints the lower case of the alphabet
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
